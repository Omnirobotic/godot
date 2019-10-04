tool
extends EditorPlugin

const scene = preload('res://UR10_1.aosscn')
const script_scene = preload('res://Spatial.tscn')
var root_node

signal move

var script_instance

func _enter_tree():
	root_node = scene.get_scene()
	#get_editor_interface().get_base_control().add_child(root_node)
	
	var to_camera = Spatial.new()
	var vec1 = Vector3(1, 0 ,0)
	var vec2 = Vector3(0, 1 ,0)
	var vec3 = Vector3(0, 0 ,1)
	var vec4 = Vector3(-1, -1 ,-1)
	to_camera.transform = Transform(vec1, vec2, vec3, vec4)
	var camera = Camera.new()
	root_node.add_child(to_camera)
	to_camera.add_child(camera)
	
	#get_editor_interface().get_editor_viewport().
	#var packed_scene = PackedScene.new()
	#packed_scene.pack(get_tree().get_current_scene())
	#get_tree().change_scene_to(packed_scene);

	add_icons_menu_item(tr('Connect to scene manager'), '_on_connect_to_scene_manager')

func _exit_tree():
	pass

#func has_main_screen():
#	return true

func _ready():
	script_instance = script_scene.instance()
	pass

func add_icons_menu_item(p_name, p_callback):
	var minor_version = Engine.get_version_info().minor
	if minor_version >= 1:
		add_tool_menu_item(p_name, self, p_callback)


func _on_connect_to_scene_manager(_data):
	print("Connecting...")
	
	var root = get_editor_interface().get_edited_scene_root()
	print(root.get_name())
	self.connect("move", global, "_on_root_move")
	#SceneManager._emit_move()
	emit_signal("move")
