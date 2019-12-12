extends Spatial

var cameras = Array()
var gun_tips = Array()
var paint_shader = ShaderMaterial.new()
var paint_shader_init = ShaderMaterial.new()
var shader = preload("res://assets/shaders/paint_shader.shader")
var shader_init = preload("res://assets/shaders/paint_shader_inverted.shader")
var mat_init
var is_init = false
var c = 0;
var first_pass = true

var DEBUG = false

# Called when the node enters the scene tree for the first time.
func _ready():
	pass
	
func init(mesh, load_texture_from_png=false):
	is_init = false
	first_pass = true
	c = 0
	$mi.mesh = mesh

	$position.set_mesh($mi.mesh)
	$normal.set_mesh($mi.mesh)
	$position.regenerate_mesh_texture()
	$normal.regenerate_mesh_texture()

	mat_init = SpatialMaterial.new()
	mat_init.albedo_color = Color(0.9, 0.9, 0.9, 1.0)
	mat_init.roughness = 1.0
	mat_init.metallic = 1.0

	mat_init.albedo_texture = $texture/paint.get_texture()
	mat_init.roughness_texture = $texture/roughness.get_texture()
	mat_init.metallic_texture = $texture/metallic.get_texture()
	
	paint_shader.shader = shader
	paint_shader.set_shader_param("meshtex_pos", $position.get_texture())
	paint_shader.set_shader_param("meshtex_normal",  $normal.get_texture())
	
	paint_shader_init.shader = shader_init
	paint_shader_init.set_shader_param("meshtex_pos", $position.get_texture())
	paint_shader_init.set_shader_param("meshtex_normal",  $normal.get_texture())
	if (load_texture_from_png):
		paint_shader.set_shader_param("initial_color", load("res://assets/textures/mi_texture_albedo.png"))
		paint_shader_init.set_shader_param("initial_color", load("res://assets/textures/mi_texture_metallic.png"))
	
	$texture/paint/albedo.material = paint_shader
	$texture/metallic/metallic.material = paint_shader_init
	$texture/roughness/roughness.material = paint_shader_init
	
	# Set all the viewports to Filter + Aniso so we get smooth jaggies (This needs to be done here, since it seems not to work when set in the editor)
	var flags = Texture.FLAG_FILTER | Texture.FLAG_ANISOTROPIC_FILTER
	mat_init.albedo_texture.flags = flags
	mat_init.roughness_texture.flags = flags	 
	mat_init.metallic_texture.flags = flags
	
	$mi.set_surface_material(0, mat_init)

	is_init = true
	
func _process(delta):
	if is_init:
		#DEBUG = true;
		#DEBUG = false;
		if DEBUG :
			cameras = [get_tree().get_root().get_node("Root/Camera")]
		else:
			cameras = get_tree().get_nodes_in_group("Tip")
		for vp in $texture.get_children():
			var paint_sprite = vp.get_children()[0]
			var mat = paint_sprite.material
			paint_sprite.visible = true

			var color;
				
			if paint_sprite.name == "roughness":
				color = Color(0,0,0,1)
			else:
				color = Color(0.16,0.66,0.88,1)

			mat.set_shader_param("first_time", first_pass)
			mat.set_shader_param("color", color)
			mat.set_shader_param("nb_of_guns", cameras.size())

			if c >10:
				first_pass = false
			else:
				vp.render_target_update_mode = Viewport.UPDATE_ONCE
				yield(get_tree(), "idle_frame")
				vp.render_target_update_mode = Viewport.UPDATE_ONCE
				yield(get_tree(), "idle_frame")
				vp.render_target_update_mode = Viewport.UPDATE_WHEN_VISIBLE
				c+=1

			# Set the cameras info texture in the shader
			# origin, looking_direction, height, width, paint_flag:1
			var texture_width = cameras.size()
			var texture_height = 1 + 1 + 1 + 1 + 1

			# Create the texture from the info array array
			var img = Image.new()
			img.create(texture_width, texture_height, false, Image.FORMAT_RGBF)

			for camera_index in texture_width:
				var camera = cameras[camera_index]
				if camera != null:
					var cam_matrix = camera.global_transform
					var clf = get_tree().get_root().get_node("World/toChain_Link_Frame/Chain_Link_Frame")
					cam_matrix.origin -= clf.global_transform.origin
					var looking_direction = -cam_matrix.basis.z
					var height = -cam_matrix.basis.x * 0.07
					var width = -cam_matrix.basis.y * 0.7
					var paint_flag
					if DEBUG :
						paint_flag = true
					else:
						var paint_flag_node = camera.get_node("paint_flag")
						paint_flag = paint_flag_node.get_paint_flag()
					
					# Set the camera specific information
					# Convert them from [-1.0;1.0] to [0.0;1.0]
					var origin_coord_min = -1000.0
					var origin_coord_max = 1000.0
					var origin_x = _convert(cam_matrix.origin.x, origin_coord_min, origin_coord_max)
					var origin_y = _convert(cam_matrix.origin.y, origin_coord_min, origin_coord_max)
					var origin_z = _convert(cam_matrix.origin.z, origin_coord_min, origin_coord_max)
					var looking_direction_x = _convert(looking_direction.x)
					var looking_direction_y = _convert(looking_direction.y)
					var looking_direction_z = _convert(looking_direction.z)
					var height_x = _convert(height.x)
					var height_y = _convert(height.y)
					var height_z = _convert(height.z)
					var width_x = _convert(width.x)
					var width_y = _convert(width.y)
					var width_z = _convert(width.z)
					paint_flag = float(paint_flag)
					paint_flag = _convert(paint_flag, 0.0, 1.0)
					
					img.lock()
					img.set_pixel(camera_index, 0, Color(origin_x, origin_y, origin_z))
					img.set_pixel(camera_index, 1, Color(looking_direction_x, looking_direction_y, looking_direction_z))
					img.set_pixel(camera_index, 2, Color(height_x, height_y, height_z))
					img.set_pixel(camera_index, 3, Color(width_x, width_y, width_z))
					img.set_pixel(camera_index, 4, Color(paint_flag, 0, 0))
					img.unlock()
					
			var texture = ImageTexture.new()
			texture.create_from_image(img, 0)
			mat.set_shader_param("guns_info", texture)

# This method converts a float that is between min_in_value and max_in_value so it is between 0 and 1
func _convert(in_value, min_in_value = -1.0, max_in_value = 1.0):
	if !(min_in_value < max_in_value):
		print("[ERROR] Min in value is bigger than max in value.")
	var in_value_range = max_in_value - min_in_value
	return (in_value - min_in_value) / in_value_range
