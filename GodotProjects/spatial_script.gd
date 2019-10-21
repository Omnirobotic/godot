tool
extends Spatial

var scene

var i = 0

var root_node

var mesh_scene = preload("res://test_mesh.tscn")

# Called when the node enters the scene tree for the first time.

func _enter_tree():
	pass

func _ready():
	$MenuBar/FileMenu.get_popup().connect("index_pressed", self, "_on_options_menu_index_pressed")
	scene = load('res://godot_scene_with_colors.tscn').instance()
	get_tree().get_root().call_deferred("add_child", scene)
	pass

func _connection_to_scene_manager():
	print("Connecting...")
	var gun_tip = get_tree().get_nodes_in_group("Tip")
	var gun_cam = load("res://gun_tip_spray_1.tscn").instance()
	gun_cam.set_name("spray")
	gun_tip[0].call_deferred("add_child", gun_cam)
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
	var new_object_doc_info = objects["added_object_document_info"]
	var removed_object_name = objects["removed_object_name"]
	
	if validate_new_object_infos(new_object_name, new_object_parent_name, new_object_doc_info) :
		add_object(new_object_name, new_object_parent_name, new_object_doc_info)
	
	if removed_object_name != "" :
		remove_object(removed_object_name)

func update_ios(ios):
	var gun_tip = get_tree().get_nodes_in_group("Tip")
	var particles = gun_tip[0].get_node("spray/Particles")
	if particles != null:
		particles.emitting = ios["gun_io"]

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

func add_object(name, parent_name, doc_info):
	var local_scene = AosScene.new()

	var new_object = local_scene.add_object(name, doc_info)
	var parent = get_tree().get_root().get_node(parent_name)
	if parent != null :
		var new_mesh = mesh_scene.instance()
		get_node("../World/toTracker/Tracker/toRail/Rail/toRail_joint/Rail_joint/toChain_Link_Frame/Chain_Link_Frame").call_deferred("add_child",new_mesh)
		new_mesh.name = name
		new_mesh.init(new_object.mesh)
		pass
	else :
		print("[ERROR] Could not find parent node : ", parent_name)

func remove_object(name):
	var removed_node = get_tree().get_root().get_node(name)
	get_tree().get_root().call_deferred("remove_child", removed_node)
