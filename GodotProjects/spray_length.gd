extends Camera

# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.

func _process(delta):

	var normal = self.project_ray_normal(Vector2(get_viewport().size.x/2,get_viewport().size.y/2))

	var directState = PhysicsServer.space_get_direct_state(get_world().get_space())
	var from = self.global_transform.origin

	# normal of size 1
	var to = from+0.2*normal

	var first_collision = directState.intersect_ray(from,to)
	
	var mat = $Particles.process_material
	
	if(first_collision.size()!=0):
		#print(first_collision["position"])
		$Particles.lifetime = (first_collision["position"]-from).length()
		#print("coll")
	else:
		$Particles.lifetime = 0.2
		#print()
	
