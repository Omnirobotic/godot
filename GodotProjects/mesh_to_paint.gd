extends Spatial

var cam = null
var gun_tip = Array()
var paint_shader = ShaderMaterial.new()
var paint_shader_init = ShaderMaterial.new()
var shader = preload("res://assets/shaders/paint_shader.shader")
var shader_init = preload("res://assets/shaders/paint_shader_inverted.shader")
var brush_gradient = preload("res://assets/shaders/brush_gradient.tres")
var is_init = false
var c = 0;
var first_pass = true

# Called when the node enters the scene tree for the first time.
func _ready():
	pass
	
func init(mesh):
	first_pass = true
	var mi = mesh

	
	$mi.mesh = mi
	
	var collision_shape = $mi.create_convex_collision()
	add_child(collision_shape)
	
	$position.set_mesh(mi)
	$normal.set_mesh(mi)
	
	var mat_init = SpatialMaterial.new()
	mat_init.albedo_color = Color(1.0, 1.0, 1.0, 1.0)
	mat_init.roughness = 1.0
	mat_init.metallic = 1.0
	
	$mi.set_surface_material(0, mat_init)

	var mat = $mi.get_surface_material(0)

	mat.albedo_texture = $texture/paint.get_texture()
	mat.roughness_texture = $texture/roughness.get_texture()
	mat.metallic_texture = $texture/metallic.get_texture()
	
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
	mat.roughness_texture.flags = flags	 
	mat.metallic_texture.flags = flags
	
	$mi.set_surface_material(0, mat)

	$position.set_mesh($mi.mesh)
	$position.regenerate_mesh_texture()
	$normal.set_mesh($mi.mesh)
	$normal.regenerate_mesh_texture()
	
	is_init = true

func _process(delta):
	if is_init:
		if cam != null:
			#cam = get_tree().get_root().get_node("Root/Camera")
			var cam_matrix = cam.global_transform
			var rail_joint = get_tree().get_root().get_node("World/toTracker/Tracker/toRail/Rail/toRail_joint/Rail_joint")
			cam_matrix.origin -= rail_joint.global_transform.origin
			var looking_direction = -cam_matrix.basis.z
			var height = -cam_matrix.basis.x
			var width = -cam_matrix.basis.y

			for vp in $texture.get_children():

				var paint_sprite = vp.get_children()[0]

				var mat = paint_sprite.material

				paint_sprite.visible = true

				var color;
				if paint_sprite.name == "roughness":
					color = Color(0,0,0,1)
				else:
					color = Color(0.16,0.66,0.88,1)

				
				var paint_flag_node = get_node("../paint_flag")
				var paint_flag = paint_flag_node.get_paint_flag()

				mat.set_shader_param("origin", cam_matrix.origin)
				mat.set_shader_param("looking_direction", looking_direction)
				mat.set_shader_param("height", 0.1*height)
				mat.set_shader_param("width", width)
				mat.set_shader_param("first_time", first_pass)
				mat.set_shader_param("paint_flag", paint_flag)
				mat.set_shader_param("color", color)
				if c >10:
					first_pass = false
				else:
					vp.render_target_update_mode = Viewport.UPDATE_ONCE
					yield(get_tree(), "idle_frame")
					vp.render_target_update_mode = Viewport.UPDATE_ONCE
					yield(get_tree(), "idle_frame")
					vp.render_target_update_mode = Viewport.UPDATE_WHEN_VISIBLE
					c+=1
		else:
			gun_tip = get_tree().get_nodes_in_group("Tip")
			if gun_tip.size() >0:
				if gun_tip[0].get_child_count() > 0:
					cam = gun_tip[0].get_children()[0]
					#cam = get_tree().get_root().get_node("Root/Camera")
