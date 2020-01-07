extends Spatial

var scene

var mesh_scene = preload("res://mesh_with_texture.tscn")
var paint_flag_scene = preload("res://paint_flag.tscn")
var omni_scene = preload('res://godot_scene_with_colors.tscn')
var spray = preload("res://spray_length.tscn")

var meshes = []
var mesh_counter = 0
var nb_mesh_to_instantiate = 3

func _enter_tree():
	pass

func _ready():
	OS.set_window_maximized(true)
	$MenuBar/FileMenu.get_popup().connect("index_pressed", self, "_on_options_menu_index_pressed")
	scene = omni_scene.instance()
	get_tree().get_root().call_deferred("add_child", scene)
	
	# initializing number of meshes to rotate with
	for i in range(nb_mesh_to_instantiate):
		print(i)
		var new_mesh = mesh_scene.instance()
		meshes.append(new_mesh)

func _connection_to_scene_manager():
	print("Connecting...")
	var gun_tips = get_tree().get_nodes_in_group("Tip")
	for i in gun_tips.size():
		var gun_cam = spray.instance()
		gun_cam.set_name("spray")
		gun_tips[i].call_deferred("add_child", gun_cam)
		var paint_flag_node = paint_flag_scene.instance()
		gun_tips[i].call_deferred("add_child", paint_flag_node)
	
	SceneManager.connect_to_scene_manager()
	var updated_scene = call_deferred("initial_update")
	SceneManager.connect("update_joints", self, "update_joints")
	SceneManager.connect("update_objects", self, "update_objects")
	SceneManager.connect("update_ios", self, "update_ios")

func _disconnection_to_scene_manager():
	print("Disconnecting...")
	SceneManager.disconnect("update_joints", self, "update_joints")
	SceneManager.disconnect("update_objects", self, "update_objects")
	SceneManager.disconnect("update_ios", self, "update_ios")

func _on_options_menu_index_pressed(index):
	match index:
		0: _connection_to_scene_manager()
		1: _disconnection_to_scene_manager()

func update_joints(joints):
	#print("msg received")
	if joints["joints_name"].size() != joints["joints_value"].size() :
		print("[ERROR] Different number of joints_value and joints_value!")
		return

	for i in joints["joints_name"].size():
		var joint_name = joints["joints_name"][i]
		var joint_value = joints["joints_value"][i]
		#get_tree().get_root().get_node(joint_name).set_joint_value(joint_value)
		
		var names = split_node_path(joint_name)
		
		#print("name0:",names[0], "maadad:", names[1])
		
		var joint_node = node_finder.find_node_path(scene, names[0], names[1])
		joint_node.call_deferred("set_joint_value", joint_value)

func update_objects(objects):
	print("[DEBUG] update_objects")
	var new_object_name = objects["added_object_name"]
	var new_object_parent_name = objects["added_object_parent_name"]
	var added_object = objects["added_object"]
	var removed_object_name = objects["removed_object_name"]
	var removed_object_parent_name = objects["removed_object_parent_name"]
	
	if removed_object_name != "" :
		remove_object(removed_object_name, removed_object_parent_name)
	
	if validate_new_object_infos(new_object_name, new_object_parent_name, added_object) :
		add_object(new_object_name, new_object_parent_name, added_object)

func update_ios(ios):
	if ios["ios_name"].size() != ios["ios_value"].size() :
		print("[ERROR] Different number of ios_value and ios_value!")
		return
		
#	var gun_tips = get_tree().get_nodes_in_group("Tip")
#	for i in gun_tips.size():
#		var particles = gun_tips[i].get_node("spray/Particles")
#		if particles != null:
#			var gun_io_value = true
#			particles.emitting = gun_io_value
#			paint_flag_node.call_deferred("set_paint_flag", gun_io_value)

	for io_index in ios["ios_name"].size():
		var names = split_node_path(ios["ios_name"][io_index])
		var gun_tip = node_finder.find_node_path(scene, names[0], names[1])
		var particles = gun_tip.get_node("spray/Particles")
		var paint_flag_node = gun_tip.get_node("paint_flag")
		if particles != null:
			var io_value = ios["ios_value"][io_index]
			particles.emitting = io_value
			paint_flag_node.call_deferred("set_paint_flag", io_value)

func initial_update():
	print("[DEBUG] Calling scene manager...")
	var update = SceneManager.get_initial_state()
	print("[DEBUG] First update received.")
	var objects_name = update["objects_name"]
	var objects_parent_name = update["objects_parent_name"]
	var objects = update["objects"]
	
	if objects_name.size() != objects_parent_name.size() :
		print("[ERROR] Different number of objects_name and objects_parent_name")
		return
		
	if objects_parent_name.size() != objects.size() :
		print("[ERROR] Different number of objects_parent_name and objects_document_info")
		return
	
	for i in range(objects_name.size()) :
		add_object(objects_name[i], objects_parent_name[i], objects[i])

func validate_new_object_infos(name, parent_name, object):
	if name == "" :
		return false
	if parent_name == "" :
		return false 
	if object == null :
		return false
	return true

func add_object(name, parent_name, object):
	var parent = get_tree().get_root().get_node(parent_name)
	
	if parent != null :
		var mesh_index = mesh_counter%nb_mesh_to_instantiate
		var mesh_scene_instance = meshes[mesh_index]
		mesh_counter += 1

		mesh_scene_instance.name = name
		var mesh = object.mesh
		print("Adding ", name)
		if mesh_scene_instance.get_parent() == null:
			mesh_scene_instance.init(mesh)
			parent.add_child(mesh_scene_instance)
		else:
			print("Reseting mesh")
			mesh_scene_instance.init(mesh)
	else:
		print("[ERROR] Could not find parent node : ", parent_name)

func remove_object(name, parent_name):
	var parent = get_tree().get_root().get_node(parent_name)
	var removed_node = parent.get_node(name)
	print("Removing part ", name)
	if removed_node != null:
		removed_node.get_node("mi").mesh = null
	#parent.call_deferred("remove_child", removed_node)

func split_node_path(node_path):
	var node_splitted_arr = node_path.split('*')
	var node_start = node_splitted_arr[0]
	var start_slash_pos = node_start.find_last("/")
	if start_slash_pos == node_start.length() - 1:
		node_start = node_start.substr(0, start_slash_pos)
	var node_end = node_splitted_arr[1]
	var end_slash_pos = node_end.find("/")
	if end_slash_pos == 0:
		node_end = node_end.substr(1, node_start.length() - 1)
	return [node_start, node_end]
