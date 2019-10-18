extends Node

# Declare member variables here. Examples:
# var a = 2
# var b = "text"

# Called when the node enters the scene tree for the first time.
func _ready():
	# LINK 1
	var link1 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/Link1")
	link1.set_layer_mask_bit(0, false)
	var link1_visible = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/Link1_Visible")
	var link1_material = SpatialMaterial.new()
	link1_material.set_albedo(Color(0.117647, 0.117647, 0.117647))
	link1_visible.set_surface_material(0, link1_material)
	# LINK 2
	var link2 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/MeshTransfo1/Link2")
	link2.set_layer_mask_bit(0, false)
	var link2_visible = link2.get_node("Link2_Visible")
	var link2_material = SpatialMaterial.new()
	link2_material.set_albedo(Color("#29AAE1"))
	link2_visible.set_surface_material(0, link2_material)
	# LINK 3
	var link3 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/MeshTransfo2/Link3")
	link3.set_layer_mask_bit(0, false)
	var link3_visible = link3.get_node("Link3_Visible")
	var link3_material = SpatialMaterial.new()
	link3_material.set_albedo(Color("#29AAE1"))
	link3_visible.set_surface_material(0, link3_material)
	# LINK 4
	var link4 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/MeshTransfo3/Link4")
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
	var link5 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/MeshTransfo4/Link5")
	link5.set_layer_mask_bit(0, false)
	var link5_visible = link5.get_node("Link5_Visible")
	var link5_material = SpatialMaterial.new()
	link5_material.set_albedo(Color("#000000"))
	link5_visible.set_surface_material(0, link5_material)
	# LINK 6
	var link6 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/MeshTransfo5/Link6")
	link6.set_layer_mask_bit(0, false)
	var link6_visible = link6.get_node("Link6_Visible")
	var link6_material = SpatialMaterial.new()
	link6_material.set_albedo(Color("#000000"))
	link6_visible.set_surface_material(0, link6_material)
	# FLANGE
	var link7 = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/Link7")
	link7.set_layer_mask_bit(0, false)
	var link7_visible = link7.get_node("Link7_Visible")
	var link7_material = SpatialMaterial.new()
	link7_material.set_albedo(Color(0.784314, 0.784314, 0.784314))
	link7_visible.set_surface_material(0, link7_material)
	# CABLE HOLDER
	var cable_holder = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/UR10_1_Gun/Gun_Bracket_Visible")
	var cable_holder_material = SpatialMaterial.new()
	cable_holder_material.set_albedo(Color(0.584314, 0.560784, 0.560784))
	cable_holder.set_surface_material(0, cable_holder_material)
	# GUN
	var gun = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Wrist1Link/Wrist1LinkTipFrame/j5/Wrist2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/UR10_1_Gun/toGun_Tip/Gun_Tip/Gun_Visible")
	var gun_material = SpatialMaterial.new()
	gun_material.set_albedo(Color(0, 0.121569, 0.768627))
	gun.set_surface_material(0, gun_material)
	# STAND
	var stand = get_node("toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1_Stand_Root/UR10_1_Stand_Mesh")
	var stand_material = SpatialMaterial.new()
	stand_material.set_albedo(Color(0.117647, 0.117647, 0.117647))
	stand.set_surface_material(0, stand_material)
	
	print("Saving the scene with colors as my_scene_with_colors.tscn")
	_recursive_set_owner(get_node("."), get_node("."))
	var packed_scene = PackedScene.new()
	packed_scene.pack(get_node("."))
	ResourceSaver.save("res://my_scene_with_colors.tscn", packed_scene)
	pass

func _recursive_set_owner(node, owner_node):
	for child in node.get_children():
		_recursive_set_owner(child, owner_node)
	if node != owner_node:
		node.set_owner(owner_node)
