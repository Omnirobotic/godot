tool
extends EditorPlugin

#var popup = preload("res://addons/add_colors_to_scene/popup.tscn")

func _enter_tree():
	add_icons_menu_item(tr('Add colors to auto generated godot scene'), '_on_adding_colors')

func _ready():
	var fd = EditorFileDialog.new()
	fd.set_name("file_dialog")
	fd.mode = fd.MODE_OPEN_FILE
	fd.access = fd.ACCESS_RESOURCES
	self.add_child(fd)
	fd.connect("file_selected", self, "_add_colors_to_file_Manac")
	
func add_icons_menu_item(p_name, p_callback):
	var minor_version = Engine.get_version_info().minor
	if minor_version >= 1:
		add_tool_menu_item(p_name, self, p_callback)

func _on_adding_colors(_data):
	var fd = get_node("file_dialog")
	fd.popup_centered_ratio(0.5)

func _add_colors_to_file_Manac(path):
	var scene = load(path).instance()

	# BOOTH
	var booth = node_finder.find_node_path(scene,"PaintBoothRoot","Booth")
	var booth_material = SpatialMaterial.new()
	booth_material.set_albedo(Color("#bfc0a9"))
	booth.set_surface_material(0, booth_material)	

	# Right robot
	# RAIL
	var rail_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","RobotRight_rail_visible")
	var rail_material_r = SpatialMaterial.new()
	rail_material_r.set_albedo(Color("#ff0000"))
	rail_visible_r.set_surface_material(0, rail_material_r)	
	# TROLLEY
	var trolley_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","RobotRight_trolley_visible")
	var trolley_material_r = SpatialMaterial.new()
	trolley_material_r.set_albedo(Color("#3e78b1"))
	trolley_visible_r.set_surface_material(0, trolley_material_r)
	# ZJOINTPLATFORM
#	var z_joint_platform_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","RobotRight_ZJointPlatform")
#	var z_joint_platform_material_r = SpatialMaterial.new()
#	z_joint_platform_material_r.set_albedo(Color("#3e78b1"))
#	z_joint_platform_visible_r.set_surface_material(0, z_joint_platform_material_r)
	# ZJOINTCOLLIDABLE
	var z_joint_collidable_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","RobotRight_ZJointCollidable")
	var z_joint_collidable_material_r = SpatialMaterial.new()
	z_joint_collidable_material_r.set_albedo(Color(0.0, 0.0, 0.0))
	z_joint_collidable_visible_r.set_surface_material(0, z_joint_collidable_material_r)

	# LINK 1
	var link1_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link1_Visible")
	var link1_material_r = SpatialMaterial.new()
	link1_material_r.set_albedo(Color("#F0E4D4"))
	link1_visible_r.set_surface_material(0, link1_material_r)
	# LINK 2
	var link2_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link2_Visible")
	var link2_material_r = SpatialMaterial.new()
	link2_material_r.set_albedo(Color("#F0E4D4"))
	link2_visible_r.set_surface_material(0, link2_material_r)
	# LINK 3
	var link3_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link3_Visible")
	var link3_material_r = SpatialMaterial.new()
	link3_material_r.set_albedo(Color("#F0E4D4"))
	link3_visible_r.set_surface_material(0, link3_material_r)
	# LINK 4
	var link4_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link4_Visible")
	var link4_material_r = SpatialMaterial.new()
	link4_material_r.set_albedo(Color("#F0E4D4"))
	link4_visible_r.set_surface_material(0, link4_material_r)
	# LINK 5
	var link5_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link5_Visible")
	var link5_material_r = SpatialMaterial.new()
	link5_material_r.set_albedo(Color("#F0E4D4"))
	link5_visible_r.set_surface_material(0, link5_material_r)
	# LINK 6
	var link6_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link6_Visible")
	var link6_material_r = SpatialMaterial.new()
	link6_material_r.set_albedo(Color("#F0E4D4"))
	link6_visible_r.set_surface_material(0, link6_material_r)
	# LINK 7
	var link7_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Link7_Visible")
	var link7_material_r = SpatialMaterial.new()
	link7_material_r.set_albedo(Color("#F0E4D4"))
	link7_visible_r.set_surface_material(0, link7_material_r)
	# CABLE HOLDER
	var cable_holder_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","Gun_Bracket_Visible")
	var cable_holder_material_r = SpatialMaterial.new()
	cable_holder_material_r.set_albedo(Color(0.584314, 0.560784, 0.560784))
	cable_holder_visible_r.set_surface_material(0, cable_holder_material_r)
	# GUN
	var gun_visible_r = node_finder.find_node_path(scene,"toRobotRight_Frame","document_node")
	var gun_material_r = SpatialMaterial.new()
	gun_material_r.set_albedo(Color(0, 0.121569, 0.768627))
	gun_visible_r.set_surface_material(0, gun_material_r)
	
	
	# Left robot
	# RAIL
	var rail_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","RobotLeft_rail_visible")
	var rail_material_l = SpatialMaterial.new()
	rail_material_l.set_albedo(Color("#ff0000"))
	rail_visible_l.set_surface_material(0, rail_material_l)	
	# TROLLEY
	var trolley_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","RobotLeft_trolley_visible")
	var trolley_material_l = SpatialMaterial.new()
	trolley_material_l.set_albedo(Color("#3e78b1"))
	trolley_visible_l.set_surface_material(0, trolley_material_l)
	# ZJOINTPLATFORM

#	var z_joint_platform_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","RobotLeft_ZJointPlatform")
#	var z_joint_platform_material_l = SpatialMaterial.new()
#	z_joint_platform_material_l.set_albedo(Color("#3e78b1"))
#	z_joint_platform_visible_l.set_surface_material(0, z_joint_platform_material_l)
	# ZJOINTCOLLIDABLE
	var z_joint_collidable_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","RobotLeft_ZJointCollidable")
	var z_joint_collidable_material_l = SpatialMaterial.new()
	z_joint_collidable_material_l.set_albedo(Color(0.0, 0.0, 0.0))
	z_joint_collidable_visible_l.set_surface_material(0, z_joint_collidable_material_l)

	# LINK 1
	var link1_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link1_Visible")
	var link1_material_l = SpatialMaterial.new()
	link1_material_l.set_albedo(Color("#F0E4D4"))
	link1_visible_l.set_surface_material(0, link1_material_l)
	# LINK 2
	var link2_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link2_Visible")
	var link2_material_l = SpatialMaterial.new()
	link2_material_l.set_albedo(Color("#F0E4D4"))
	link2_visible_l.set_surface_material(0, link2_material_l)
	# LINK 3
	var link3_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link3_Visible")
	var link3_material_l = SpatialMaterial.new()
	link3_material_l.set_albedo(Color("#F0E4D4"))
	link3_visible_l.set_surface_material(0, link3_material_l)
	# LINK 4
	var link4_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link4_Visible")
	var link4_material_l = SpatialMaterial.new()
	link4_material_l.set_albedo(Color("#F0E4D4"))
	link4_visible_l.set_surface_material(0, link4_material_l)
	# LINK 5
	var link5_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link5_Visible")
	var link5_material_l = SpatialMaterial.new()
	link5_material_l.set_albedo(Color("#F0E4D4"))
	link5_visible_l.set_surface_material(0, link5_material_l)
	# LINK 6
	var link6_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link6_Visible")
	var link6_material_l = SpatialMaterial.new()
	link6_material_l.set_albedo(Color("#F0E4D4"))
	link6_visible_l.set_surface_material(0, link6_material_l)
	# LINK 7
	var link7_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Link7_Visible")
	var link7_material_l = SpatialMaterial.new()
	link7_material_l.set_albedo(Color("#F0E4D4"))
	link7_visible_l.set_surface_material(0, link7_material_l)
	# CABLE HOLDER
	var cable_holder_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","Gun_Bracket_Visible")
	var cable_holder_material_l = SpatialMaterial.new()
	cable_holder_material_l.set_albedo(Color(0.584314, 0.560784, 0.560784))
	cable_holder_visible_l.set_surface_material(0, cable_holder_material_l)
	# GUN
	var gun_visible_l = node_finder.find_node_path(scene,"toRobotLeft_Frame","document_node")
	var gun_material_l = SpatialMaterial.new()
	gun_material_l.set_albedo(Color(0, 0.121569, 0.768627))
	gun_visible_l.set_surface_material(0, gun_material_l)
	
	print("Saving the scene with colors as my_scene_with_colors.tscn")
	_recursive_set_owner(scene.get_node("."), scene.get_node("."))
	var packed_scene = PackedScene.new()
	packed_scene.pack(scene.get_node("."))
	
	ResourceSaver.save("res://my_scene_with_colors.scn", packed_scene)
	pass
	
	
	
func _add_colors_to_file_Atlas(path):
	var scene = load(path).instance()
	
	# LINK 1
	var link1 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/Link1")
	link1.set_layer_mask_bit(0, false)
	var link1_visible = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/Link1_Visible")
	var link1_material = SpatialMaterial.new()
	link1_material.set_albedo(Color(0.117647, 0.117647, 0.117647))
	link1_visible.set_surface_material(0, link1_material)
	# LINK 2
	var link2 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/MeshTransfo1/Link2")
	link2.set_layer_mask_bit(0, false)
	var link2_visible = link2.get_node("Link2_Visible")
	var link2_material = SpatialMaterial.new()
	link2_material.set_albedo(Color("#29AAE1"))
	link2_visible.set_surface_material(0, link2_material)
	# LINK 3
	var link3 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/MeshTransfo2/Link3")
	link3.set_layer_mask_bit(0, false)
	var link3_visible = link3.get_node("Link3_Visible")
	var link3_material = SpatialMaterial.new()
	link3_material.set_albedo(Color("#29AAE1"))
	link3_visible.set_surface_material(0, link3_material)
	# LINK 4
	var link4 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/MeshTransfo3/Link4")
	link4.set_layer_mask_bit(0, false)
	var link4_visible = link4.get_node("Link4_Visible")
	var link4_material = SpatialMaterial.new()
	link4_material.set_albedo(Color("#000000"))
	link4_visible.set_surface_material(0, link4_material)
	var logo_visible = link4.get_node("Logo_LOGO_visible")
	var logo_visible_material = SpatialMaterial.new()
	logo_visible_material.set_albedo(Color("#29AAE1"))
	logo_visible.set_surface_material(0, logo_visible_material)
	var omni_visible = link4.get_node("Logo_OMNI_visible")
	var omni_visible_material = SpatialMaterial.new()
	omni_visible_material.set_albedo(Color("#FFFFFF"))
	omni_visible.set_surface_material(0, omni_visible_material)
	var robotic_visible = link4.get_node("Logo_ROBOTIC_visible")
	var robotic_visible_material = SpatialMaterial.new()
	robotic_visible_material.set_albedo(Color("#29AAE1"))
	robotic_visible.set_surface_material(0, robotic_visible_material)
	# LINK 5
	var link5 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/MeshTransfo4/Link5")
	link5.set_layer_mask_bit(0, false)
	var link5_visible = link5.get_node("Link5_Visible")
	var link5_material = SpatialMaterial.new()
	link5_material.set_albedo(Color("#000000"))
	link5_visible.set_surface_material(0, link5_material)
	# LINK 6
	var link6 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/MeshTransfo5/Link6")
	link6.set_layer_mask_bit(0, false)
	var link6_visible = link6.get_node("Link6_Visible")
	var link6_material = SpatialMaterial.new()
	link6_material.set_albedo(Color("#000000"))
	link6_visible.set_surface_material(0, link6_material)
	# FLANGE
	var link7 = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/Link7")
	link7.set_layer_mask_bit(0, false)
	var link7_visible = link7.get_node("Link7_Visible")
	var link7_material = SpatialMaterial.new()
	link7_material.set_albedo(Color(0.784314, 0.784314, 0.784314))
	link7_visible.set_surface_material(0, link7_material)
	# CABLE HOLDER
	var cable_holder = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/UR10_1_Gun/Gun_Bracket_Visible")
	var cable_holder_material = SpatialMaterial.new()
	cable_holder_material.set_albedo(Color(0.584314, 0.560784, 0.560784))
	cable_holder.set_surface_material(0, cable_holder_material)
	# GUN
	var gun = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/UR10_1_Gun/toGun_Tip/Gun_Tip/Gun_Visible")
	var gun_material = SpatialMaterial.new()
	gun_material.set_albedo(Color(0, 0.121569, 0.768627))
	gun.set_surface_material(0, gun_material)
	# STAND
	var stand = scene.get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1_Stand_Root/UR10_1_Stand_Mesh")
	var stand_material = SpatialMaterial.new()
	stand_material.set_albedo(Color(0.117647, 0.117647, 0.117647))
	stand.set_surface_material(0, stand_material)
	
	print("Saving the scene with colors as my_scene_with_colors.tscn")
	_recursive_set_owner(scene.get_node("."), scene.get_node("."))
	var packed_scene = PackedScene.new()
	packed_scene.pack(scene.get_node("."))
	
	ResourceSaver.save("res://my_scene_with_colors.scn", packed_scene)


func _recursive_set_owner(node, owner_node):
	# we need to do this because otherwise the child with no owners
	# will not be set
	for child in node.get_children():
		_recursive_set_owner(child, owner_node)
	if node != owner_node:
		node.set_owner(owner_node)
