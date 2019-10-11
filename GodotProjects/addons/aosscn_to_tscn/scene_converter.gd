tool
extends EditorPlugin


func _enter_tree():
	add_icons_menu_item(tr('Convert scene aosscn to godot scene'), '_on_connect_to_scene_manager')

func _exit_tree():
	pass


func _ready():
	pass

func add_icons_menu_item(p_name, p_callback):
	var minor_version = Engine.get_version_info().minor
	if minor_version >= 1:
		add_tool_menu_item(p_name, self, p_callback)

func _recursive_set_owner(node, owner_node):
	for child in node.get_children():
		_recursive_set_owner(child, owner_node)
	node.set_owner(owner_node)

func _on_connect_to_scene_manager(_data):
	var root = get_editor_interface().get_edited_scene_root()
	var scene = load('res://UR10_1.aosscn')
	var root_node = scene.get_base_scene()	
	_recursive_set_owner(root_node, root_node)
	var packed_scene = PackedScene.new()
	packed_scene.pack(root_node)
	ResourceSaver.save("res://my_scene.tscn", packed_scene)
