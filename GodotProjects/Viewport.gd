extends WorldEnvironment

onready var state_machine = $InputStates
onready var parent_viewport = get_parent()
onready var camera =  $spatial/camroot/cam
onready var camera2 =  $toUR10_1_Root_Dummy/UR10_1_Root_Dummy/UR10_1/j1/ShoulderLink/ShouldLinkTipFrame/j2/UpperArmLink/UpperArmLinkTipFrame/j3/ForearmLink/ForearmLinkTipFrame/j4/Write1Link/Wrist1LinkTipFrame/j5/Write2Link/Wrist2LinkTipFrame/j6/TcpTransform/TipLink/UR10_1_Gun/toGun_Tip/Gun_Tip/Gun_Tip_Link/cam2

var mat_global = preload("res://assets/models/mat_suz.material")

var mesh_scene = preload("res://textures_subscene_mesh.tscn")
var paint_scene = preload("res://textures_subscene_paint.tscn")

var added = false

func _process(delta):
	state_machine.update(delta)

func _input(event):
	
	if event is InputEventKey:
		if event.scancode == KEY_RIGHT: 
			camera2.translate(Vector3(0.01,0,0))
		elif event.scancode == KEY_LEFT: 
			camera2.translate(Vector3(-0.01,0,0))
		elif event.scancode == KEY_UP: 
			camera2.translate(Vector3(0,0.01,0))
		elif event.scancode == KEY_DOWN: 
			camera2.translate(Vector3(0,-0.01,0))
		elif event.scancode == KEY_E:
			if !added:
				add_mesh(preload("res://assets/models/Suzanne.mesh"))
				added = true

func _on_ViewportUI_gui_input(ev):
	state_machine.handle_input(ev)


func _ready():
	PainterState.main = self
	
	state_machine.switch_state("Paint")
	
	# setup the mesh's spatial textures (TODO maybe do this in the Textures node instead?)
	var mat = $spatial/mesh.get_surface_material(0)
	mat.albedo_texture = Textures.get_node("paint/albedo").get_texture()
	mat.roughness_texture = Textures.get_node("paint/roughness").get_texture()
	mat.metallic_texture = Textures.get_node("paint/metalness").get_texture()
	mat.emission_texture = Textures.get_node("paint/emission").get_texture()

	
	# setup the paint shader's viewport textures
	var paint_shader = preload("res://assets/shaders/paint_shader.tres") 
	paint_shader.set_shader_param("meshtex_pos", Textures.get_node("mesh/position").get_texture())
	paint_shader.set_shader_param("meshtex_normal",  Textures.get_node("mesh/normal").get_texture())

	
	# finally setup mesh
	change_mesh(preload("res://assets/models/shape0.mesh"))


func change_mesh(mesh): # This will make the program paint on a different mesh
	

	
	var mat = $spatial/mesh.get_surface_material(0)
	$spatial/mesh.mesh = mesh


	
	# Set all the viewports to Filter + Aniso so we get smooth jaggies (This needs to be done here, since it seems not to work when set in the editor)
	var flags = Texture.FLAG_FILTER | Texture.FLAG_ANISOTROPIC_FILTER
	mat.albedo_texture.flags = flags 
	mat.roughness_texture.flags = flags	 
	mat.metallic_texture.flags = flags
	mat.emission_texture.flags = flags
	
	$spatial/mesh.set_surface_material(0, mat)
	
	# Regenerate all the mesh textures
	for vp in Textures.get_node("mesh").get_children():
		vp.mesh = mesh
		vp.regenerate_mesh_texture()

func add_mesh(mesh1):
	
	
	var mesh_child = mesh_scene.instance()
	
	for paint_sprite in get_tree().get_nodes_in_group("paint_sprite"):
		paint_sprite.remove_from_group("paint_sprite")
		print("remove")
	print(get_tree().get_nodes_in_group("paint_sprite"))
		
	var paint_child = paint_scene.instance()
	mesh_child.name = "mesh1"
	paint_child.name = "paint1"

	get_tree().get_root().get_node("Textures").add_child(mesh_child)
	get_tree().get_root().get_node("Textures").add_child(paint_child)
	
	var mi = MeshInstance.new()
	mi.name = "mesh1"
	mi.translate(Vector3(3.0,0,0))
	$spatial.add_child(mi)
	mi.mesh = mesh1
	mi.set_surface_material(0, preload("res://assets/models/mat_suz.material"))
	
	var mat = mi.get_surface_material(0)
	# changer on veut rajouter un nouveau viewport
	mat.albedo_texture = Textures.get_node("paint1/albedo").get_texture()
	mat.roughness_texture = Textures.get_node("paint1/roughness").get_texture()
	mat.metallic_texture = Textures.get_node("paint1/metalness").get_texture()
	mat.emission_texture = Textures.get_node("paint1/emission").get_texture()
	
	var paint_shader = preload("res://assets/shaders/paint_shader.tres") 
	paint_shader.set_shader_param("meshtex_pos", Textures.get_node("mesh1/position").get_texture())
	paint_shader.set_shader_param("meshtex_normal",  Textures.get_node("mesh1/normal").get_texture())
	
	# Set all the viewports to Filter + Aniso so we get smooth jaggies (This needs to be done here, since it seems not to work when set in the editor)
	var flags = Texture.FLAG_FILTER | Texture.FLAG_ANISOTROPIC_FILTER
	mat.albedo_texture.flags = flags 
	mat.roughness_texture.flags = flags	 
	mat.metallic_texture.flags = flags
	mat.emission_texture.flags = flags
	
	mi.set_surface_material(0, mat)
	
	for vp in Textures.get_node("mesh1").get_children():
		vp.mesh = mesh1
		vp.regenerate_mesh_texture_2(mesh1)
