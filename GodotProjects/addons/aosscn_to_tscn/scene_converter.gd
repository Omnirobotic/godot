tool
extends EditorPlugin


func _enter_tree():
	add_icons_menu_item(tr('Convert scene aosscn to godot scene'), '_on_convert')

func _ready():
	var fd = EditorFileDialog.new()
	fd.set_name("file_dialog")
	fd.mode = fd.MODE_OPEN_FILE
	fd.access = fd.ACCESS_RESOURCES
	self.add_child(fd)
	fd.connect("file_selected", self, "_on_converting_scene")

func add_icons_menu_item(p_name, p_callback):
	var minor_version = Engine.get_version_info().minor
	if minor_version >= 1:
		add_tool_menu_item(p_name, self, p_callback)
		
func _recursive_set_owner(node, owner_node):
	# we need to do this because otherwise the child with no owners
	# will not be set
	for child in node.get_children():
		_recursive_set_owner(child, owner_node)
	if node != owner_node:
		node.set_owner(owner_node)
		
func _set_tips_manac(root_node):
	var tip_left = root_node.get_node("toRobotLeft_Frame/RobotLeft_Frame/toRobotLeft_RailJoint/RobotLeft_RailJoint/to_RobotLeft_trolley/RobotLeft_trolley/RobotLeft_ZRailJoint/to_RobotLeftplatform_base_node/RobotLeftplatform_base_node/RobotLeft_rotation/tobaseLink/baseLink/tojoint1/joint1/Link1/tojoint2/joint2/Link2/tojoint3/joint3/Link3/tojoint4/joint4/Link4/tojoint5/joint5/Link5/tojoint6/joint6/Link6/RobotLeft_Gun/toGun_Tip/Gun_Tip/Gun_Tip_Link")
	var tipright = root_node.get_node("toRobotRight_Frame/RobotRight_Frame/toRobotRight_RailJoint/RobotRight_RailJoint/to_RobotRight_trolley/RobotRight_trolley/RobotRight_ZRailJoint/to_RobotRightplatform_base_node/RobotRightplatform_base_node/RobotRight_rotation/tobaseLink/baseLink/tojoint1/joint1/Link1/tojoint2/joint2/Link2/tojoint3/joint3/Link3/tojoint4/joint4/Link4/tojoint5/joint5/Link5/tojoint6/joint6/Link6/RobotRight_Gun/toGun_Tip/Gun_Tip/Gun_Tip_Link")
	tip_left.add_to_group("Tip", true)
	tipright.add_to_group("Tip", true)

func _on_convert(_data):
	var fd = get_node("file_dialog")
	fd.popup_centered_ratio(0.5)

func _on_converting_scene(path):
	var scene = load(path)
	var root_node = scene.get_base_scene()	
	_recursive_set_owner(root_node, root_node)
	#_set_tips_manac(root_node)
	var packed_scene = PackedScene.new()
	packed_scene.pack(root_node)
	ResourceSaver.save("res://my_scene.tscn", packed_scene)
	print("Done saving scene.")
