tool
extends EditorPlugin
const scene = preload('res://UR10_1.aosscn')
var root_node
#signal move
func _enter_tree():
    add_icons_menu_item(tr('Connect to scene manager'), '_on_connect_to_scene_manager')
    add_icons_menu_item(tr('Disconnect to scene manager'), '_on_disconnect_to_scene_manager')

func _exit_tree():
    pass


func _ready():
    pass

func add_icons_menu_item(p_name, p_callback):
    var minor_version = Engine.get_version_info().minor
    if minor_version >= 1:
        add_tool_menu_item(p_name, self, p_callback)

func _on_connect_to_scene_manager(_data):
    print("Connecting...")
    SceneManager.connect("update_joints", get_tree().get_edited_scene_root(), "move")    
    print(get_tree())
    print(get_tree().get_edited_scene_root().get_name())
    
func _on_disconnect_to_scene_manager(_data):
    print("Disconnecting...")
    SceneManager.disconnect("update_joints", get_tree().get_edited_scene_root(), "move")
