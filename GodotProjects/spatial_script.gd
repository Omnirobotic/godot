tool
extends Spatial

# Declare member variables here. Examples:
# var a = 2
# var b = "text"

# Called when the node enters the scene tree for the first time.
func _ready():
	var scene = load("res://UR10_1.aosscn")
	#var test = load("res://my_scene.tscn").instance()
	#test.display()
	#print("ICIT", test.get_class())
	#scene.convert_to_scene()
	var godot_scene = scene.get_scene()
	add_child(godot_scene)
	var root = get_tree().get_root().get_node("Root")
	var world = get_node("..")
	root.set_owner(world)
	godot_scene.set_owner(root)

	var node = godot_scene
	while node.get_child_count() > 0 :
		print(node.get_child_count())
		print("Parent : " , node.get_parent().get_instance_id())
		print("Current : ", node.get_instance_id())
		var children = node.get_children()
		for i in range(node.get_child_count()) :
			print("Child : ", children[i].get_instance_id())
			children[i].set_owner(root)
		node = children[0]


	var packed_scene = PackedScene.new()
	packed_scene.pack(get_tree().get_current_scene())
	ResourceSaver.save("res://my_scene.tscn", packed_scene)

	#SceneManager.connect("move", self, "_move")
	#SceneManager.get_singleton()
	#SceneManager.connect_signals()
	#SceneManager.connect("move", self, "move_func")
	#print("Emitted")
	global.connect("global_move", self, "_on_root_move")
	print("Connecteds")
	pass
	
func _on_root_move():
	print("Received")
	#var node = get_node(".")
	#print(node.get_name())
	#print(node)
	#print(node.get_child_count())
	#while node.get_child_count() > 0 :
#		print(node.get_child_count())
#		print("Parent : " , node.get_parent().get_instance_id())
#		print("Current : ", node.get_instance_id())
#		var children = node.get_children()
#		for i in range(node.get_child_count()) :
#			print("Child : ", children[i].get_instance_id())
#		node = children[0]
#
