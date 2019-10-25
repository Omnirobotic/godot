extends Spatial

var scene

var mesh_scene = preload("res://test_mesh.tscn")
var paint_flag_scene = preload("res://paint_flag.tscn")
var paint_flag_node

# Called when the node enters the scene tree for the first time.

var meshes = []
var mesh_counter = 0
var nb_mesh_to_instantiate = 4

func _enter_tree():
	pass

func _ready():
	$MenuBar/FileMenu.get_popup().connect("index_pressed", self, "_on_options_menu_index_pressed")
	scene = load('res://godot_scene_with_colors.tscn').instance()
	get_tree().get_root().call_deferred("add_child", scene)
	
	for i in range(nb_mesh_to_instantiate):
		print(i)
		var new_mesh = mesh_scene.instance()
		meshes.append(new_mesh)
	
	pass

func _connection_to_scene_manager():
	print("Connecting...")
	var gun_tip = get_tree().get_nodes_in_group("Tip")
	var gun_cam = load("res://gun_tip_spray_1.tscn").instance()
	gun_cam.set_name("spray")
	gun_tip[0].call_deferred("add_child", gun_cam)
	
	# Add paint flag node that indicates if gun is on or off
	var chain_link_frame = get_node("../World/toTracker/Tracker/toRail/Rail/toRail_joint/Rail_joint/toChain_Link_Frame/Chain_Link_Frame")
	paint_flag_node = paint_flag_scene.instance()
	chain_link_frame.call_deferred("add_child", paint_flag_node)
	
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
	if joints["joints_name"].size() != joints["joints_value"].size() :
		print("[ERROR] Different number of joints_value and joints_value!")
		return

	for i in joints["joints_name"].size() :
		var joint_name = joints["joints_name"][i]
		var joint_value = joints["joints_value"][i]
		#get_tree().get_root().get_node(joint_name).set_joint_value(joint_value)
		get_node("..").get_node(joint_name).call_deferred("set_joint_value", joint_value)

func update_objects(objects):
	print("[DEBUG] update_objects")
	var new_object_name = objects["added_object_name"]
	var new_object_parent_name = objects["added_object_parent_name"]
	var added_object = objects["added_object"]
	var removed_object_name = objects["removed_object_name"]
	var removed_object_parent_name = objects["removed_object_parent_name"]
	
	if validate_new_object_infos(new_object_name, new_object_parent_name, added_object) :
		add_object(new_object_name, new_object_parent_name, added_object)
	
	if removed_object_name != "" :
		remove_object(removed_object_name, removed_object_parent_name)

func update_ios(ios):
	var gun_tip = get_tree().get_nodes_in_group("Tip")
	var particles = gun_tip[0].get_node("spray/Particles")
	if particles != null:
		var gun_io_value = ios["gun_io"]
		particles.emitting = ios["gun_io"]
		paint_flag_node.call_deferred("set_paint_flag", gun_io_value)

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

func add_object(name, parent_name, new_object):
	var parent = get_tree().get_root().get_node(parent_name)
	if parent != null :
		var new_mesh
		print(mesh_counter, " < ", nb_mesh_to_instantiate)
		if mesh_counter < nb_mesh_to_instantiate:
			new_mesh = meshes[mesh_counter]
		mesh_counter += 1
		print("Before")
		get_node("../World/toTracker/Tracker/toRail/Rail/toRail_joint/Rail_joint/toChain_Link_Frame/Chain_Link_Frame").add_child(new_mesh)
		print("After add")
		new_mesh.name = name
		print("After name")
		var mdt = MeshDataTool.new()
		mdt.create_from_surface(new_object.mesh, 0)
		for i in range(10):
			print(mdt.get_vertex_uv(i))
		new_mesh.init(new_object.mesh)
		print("after init")
		pass
	else:
		print("[ERROR] Could not find parent node : ", parent_name)

func remove_object(name, parent_name):
	var parent = get_tree().get_root().get_node(parent_name)
	var removed_node = parent.get_node(name)
	print("Removing part ", removed_node.get_name())
	parent.call_deferred("remove_child", removed_node)
