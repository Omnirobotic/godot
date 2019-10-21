extends Spatial

# Declare member variables here. Examples:
# var a = 2
# var b = "text"
var cam = null
var gun_tip = Array()
var paint_shader = ShaderMaterial.new()
var paint_shader_init = ShaderMaterial.new()
var shader = preload("res://assets/shaders/paint_shader_1.shader")
var shader_init = preload("res://assets/shaders/paint_shader_init.shader")
var brush_gradient = preload("res://assets/shaders/brush_gradient.tres")
var is_init = false
var c = 0;
var first_pass = true

# Called when the node enters the scene tree for the first time.
func _ready():
	pass
	
func init(mesh):
	var mi = mesh
	
	#var test = mesh.create_convex_collision()
	#$mi.translate(Vector3(1,0,0))
	#var mi = mesh_mesh.instance()
	
	$mi.mesh = mi
	
	#var colli = $mi.create_convex_collision()
	#add_child(colli)
	
	$position.set_mesh(mi)
	$position.regenerate_mesh_texture()
	$normal.set_mesh(mi)
	$normal.regenerate_mesh_texture()
	
	#var mat_init = Material.new()
	
	var mat_init = SpatialMaterial.new()
	mat_init.albedo_color = Color(1.0, 1.0, 1.0, 1.0)
	mat_init.roughness = 1.0
	mat_init.metallic = 1.0
	
	$mi.set_surface_material(0, mat_init)

	var mat = $mi.get_surface_material(0)
	# changer on veut rajouter un nouveau viewport
	mat.albedo_texture = $texture/paint.get_texture()
	
	
	
	mat.roughness_texture = $texture/roughness.get_texture()
	#mat.roughness_texture.draw_rect(Color(1,1,1,1))
	mat.metallic_texture = $texture/metallic.get_texture()
	#mat.emission_texture = $texture/paint.get_texture()
	
	paint_shader.shader = shader
	paint_shader.set_shader_param("brush_tex", brush_gradient)
	paint_shader.set_shader_param("meshtex_pos", $position.get_texture())
	paint_shader.set_shader_param("meshtex_normal",  $normal.get_texture())
	
	paint_shader_init.shader = shader_init
	paint_shader_init.set_shader_param("brush_tex", brush_gradient)
	paint_shader_init.set_shader_param("meshtex_pos", $position.get_texture())
	paint_shader_init.set_shader_param("meshtex_normal",  $normal.get_texture())
	
	$texture/paint/albedo.material = paint_shader
	$texture/metallic/metallic.material = paint_shader_init
	$texture/roughness/roughness.material = paint_shader_init
	# Set all the viewports to Filter + Aniso so we get smooth jaggies (This needs to be done here, since it seems not to work when set in the editor)
	var flags = Texture.FLAG_FILTER | Texture.FLAG_ANISOTROPIC_FILTER
	mat.albedo_texture.flags = flags
	#mat.roughness_texture.flags = flags	 
	#mat.metallic_texture.flags = flags
	#mat.emission_texture.flags = flags
	
	$mi.set_surface_material(0, mat)

	$position.set_mesh($mi.mesh)
	$position.regenerate_mesh_texture()
	$normal.set_mesh($mi.mesh)
	$normal.regenerate_mesh_texture()
	
	is_init = true
#
#	for vp in $texture.get_children():
#		#var paint_sprite = $texture/paint/albedo
#		var paint_sprite = vp.get_children()[0]
#		#print(paint_sprite.name)
#		var mat1 = paint_sprite.material
#		mat1.set_shader_param("scale", 1)	
#		mat1.set_shader_param("first_time", true)	
#		mat1.set_shader_param("cam_mat", Transform())
#		mat1.set_shader_param("z_near", 1)
#		mat1.set_shader_param("z_far", 1)
#		mat1.set_shader_param("fovy_degrees", 1)
#		mat1.set_shader_param("mouse_pos", Vector2())
#		mat1.set_shader_param("aspect", 0.5) # Don't change this or your brush gets skewed!
#		mat1.set_shader_param("aspect_shadow", 1.0)
#		mat1.set_shader_param("decal", false)
#		mat1.set_shader_param("color", Color())
#		yield(get_tree(), "idle_frame")
#		yield(get_tree(), "idle_frame")


func _process(delta):
	if is_init:
		if cam != null:
			var cam_matrix = cam.global_transform
			var rail_joint = get_tree().get_root().get_node("World/toTracker/Tracker/toRail/Rail/toRail_joint/Rail_joint")
			cam_matrix.origin -= Vector3(-rail_joint.get_joint_value(),0,0)
			
			#print(get_tree().get_nodes_in_group("paint_sprite").size())
			#var size_group = get_tree().get_nodes_in_group("paint").size()
			for vp in $texture.get_children():
				#var paint_sprite = $texture/paint/albedo
				var paint_sprite = vp.get_children()[0]
				#print(paint_sprite.name)
				var mat = paint_sprite.material
	
				paint_sprite.visible = true
		
				var mouse_pos=Vector2(0.5,0.5)
				var color;
				if paint_sprite.name == "roughness":
					color = Color(0,0,0,0.5)
				else:
					color = Color(1,1,1,0.5)
				var size = 0.35
				
				mat.set_shader_param("origin", cam_matrix.origin)
				mat.set_shader_param("scale", size)	
				mat.set_shader_param("first_time", false)	
				mat.set_shader_param("cam_mat", cam_matrix)
				mat.set_shader_param("z_near", cam.near)
				mat.set_shader_param("z_far", cam.far)
				mat.set_shader_param("fovy_degrees", cam.fov)
				mat.set_shader_param("mouse_pos", mouse_pos)
				mat.set_shader_param("aspect", 0.5) # Don't change this or your brush gets skewed!
				mat.set_shader_param("aspect_shadow", 1.0)
				mat.set_shader_param("decal", false)
				mat.set_shader_param("color", color)
				if c >0:
					first_pass = false
				else:
					yield(get_tree(), "idle_frame")
					yield(get_tree(), "idle_frame")
					c+=1
		else:
			gun_tip = get_tree().get_nodes_in_group("Tip")
			if gun_tip.size() >0:
				if gun_tip[0].get_child_count() > 0:
					cam = gun_tip[0].get_children()[0]
