tool
extends Spatial

var scene

var mesh_scene = preload("res://test_mesh.tscn")
var paint_flag_scene = preload("res://paint_flag.tscn")
var paint_flag_node

var meshes = []
var mesh_counter = 0
var nb_mesh_to_instantiate = 10
var threads = []
signal thread_done
var mesh_pool = []
# Called when the node enters the scene tree for the first time.

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
	connect("thread_done", self, "thread_done")
	
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

	for i in joints["joints_name"].size():
		var joint_name = joints["joints_name"][i]
		var joint_value = joints["joints_value"][i]
		#get_tree().get_root().get_node(joint_name).set_joint_value(joint_value)
		get_node("..").get_node(joint_name).call_deferred("set_joint_value", joint_value)

func update_objects(objects):
	print("[DEBUG] update_objects")
	var new_object_name = objects["added_object_name"]
	var new_object_parent_name = objects["added_object_parent_name"]
	var new_object_doc_info = objects["added_object_document_info"]
	var removed_object_name = objects["removed_object_name"]
	var removed_object_parent_name = objects["removed_object_parent_name"]
	
	if validate_new_object_infos(new_object_name, new_object_parent_name, new_object_doc_info) :
		add_object(new_object_name, new_object_parent_name, new_object_doc_info)
	
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
	var objects_document_info = update["objects_document_info"]
	
	if objects_name.size() != objects_parent_name.size() :
		print("[ERROR] Different number of objects_name and objects_parent_name")
		return
		
	if objects_parent_name.size() != objects_document_info.size() :
		print("[ERROR] Different number of objects_parent_name and objects_document_info")
		return
	
	for i in range(objects_name.size()) :
		add_object(objects_name[i], objects_parent_name[i], objects_document_info[i])

func validate_new_object_infos(name, parent_name, doc_info):
	if name == "" :
		return false
	if parent_name == "" :
		return false 
	if doc_info["store_key"] == "" :
		return false
	if doc_info["type_name"] == "" :
		return false
	if doc_info["format_name"] == "" :
		return false
	return true

func thread_func(args):
	var name = args["name"]
	var doc_info = args["doc_info"]
	var parent_name = args["parent_name"]
	var local_scene = AosScene.new()
	var new_object = local_scene.add_object(name, doc_info)
	mesh_pool.push_back(new_object.mesh)
	emit_signal("thread_done", new_object.mesh, name, parent_name, doc_info)

func thread_done(new_object_mesh, name, parent_name, doc_info):
	var parent = get_tree().get_root().get_node(parent_name)
	if parent != null :
#		var new_mesh = mesh_scene.instance()
		var new_mesh
		if mesh_counter < nb_mesh_to_instantiate:
			new_mesh = meshes[mesh_counter]
			mesh_counter += 1
			print("Before")

		new_mesh.name = name
		var mesh = mesh_pool.pop_front()
		get_node("../World/toTracker/Tracker/toRail/Rail/toRail_joint/Rail_joint/toChain_Link_Frame/Chain_Link_Frame").call_deferred("add_child",new_mesh)
		new_mesh.call_deferred("init", new_object_mesh)

	else:
		print("[ERROR] Could not find parent node : ", parent_name)

func add_object(name, parent_name, doc_info):
	var thread = Thread.new()
	var args = { "name" : name, "parent_name" : parent_name, "doc_info" : doc_info}
	thread.start(self, "thread_func", args)
	threads.append(thread)

func remove_object(name, parent_name):
	var parent = get_tree().get_root().get_node(parent_name)
	var removed_node = parent.get_node(name)
	print("Removing part ", removed_node.get_name())
	parent.call_deferred("remove_child", removed_node)
