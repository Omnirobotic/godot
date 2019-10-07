tool
extends Spatial
# Declare member variables here. Examples:
# var a = 2
# var b = "text"
const scene = preload('res://UR10_1.aosscn')

var i = 0

var counter = 0

var root_node

#export var root2 = Node().new()
# Called when the node enters the scene tree for the first time.

func _enter_tree():
	root_node = scene.get_base_scene()	
	get_tree().get_root().call_deferred("add_child", root_node)
	pass

func _ready():
	var updated_scene = call_deferred("initial_update")
	pass

func update_joints(joints):
	if (true):
		if joints["joints_name"].size() != joints["joints_value"].size() :
			print("[ERROR] Different number of joints_value and joints_value!")
			return

		for i in joints["joints_name"].size()-1 :
			var joint_name = joints["joints_name"][i]
			var joint_value = joints["joints_value"][i]
			get_tree().get_root().get_node(joint_name).call_deferred("set_joint_value",joint_value)

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
	var new_object = scene.add_object(name, doc_info)
	var parent = get_tree().get_root().get_node(parent_name)
	if parent != null :
		parent.call_deferred("add_child", new_object)
	else :
		print("[ERROR] Could not find parent node : ", parent_name)

func remove_object(name):
	var removed_node = get_tree().get_root().get_node(name)
	get_tree().get_root().call_deferred("remove_child", removed_node)
