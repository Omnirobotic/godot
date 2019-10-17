extends Spatial

# Declare member variables here. Examples:
# var a = 2
# var b = "text"
var mesh_scene = preload("res://test_mesh.tscn")
# Called when the node enters the scene tree for the first time.
func _ready():
	
	var mesh1 = load("res://assets/models/shape3.mesh")
	var mesh2 = load("res://assets/models/Suzanne.mesh")
	
	var mesh_scene_instance1 = mesh_scene.instance()
	var mesh_scene_instance2 = mesh_scene.instance()
	
	self.add_child(mesh_scene_instance1)
	self.add_child(mesh_scene_instance2)
	
	mesh_scene_instance1.init(mesh1)
	mesh_scene_instance2.init(mesh2)
	

	
	pass # Replace with function body.

func _input(event):
	
	if event is InputEventKey:
		if event.scancode == KEY_RIGHT: 
			$cam.translate(Vector3(0.03,0,0))
		elif event.scancode == KEY_LEFT: 
			$cam.translate(Vector3(-0.03,0,0))
		elif event.scancode == KEY_UP: 
			$cam.translate(Vector3(0,0.03,0))
		elif event.scancode == KEY_DOWN: 
			$cam.translate(Vector3(0,-0.03,0))
#		elif event.scancode == KEY_E:
#			if !added:
#				add_mesh(preload("res://assets/models/Suzanne.mesh"))
#				added = true

