extends CheckBox

var is_checked = false

# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.

func _pressed():
	print("pressed")
	if !is_checked:
		print("Connecting...")
		print(get_parent().get_name())
		SceneManager.connect("update_joints", get_parent(), "update_joints")
		SceneManager.connect("update_objects", get_parent(), "update_objects")
		#SceneManager.connect("ios", get_parent(), "ios")
		is_checked = true
	else:
		print("Disconnecting...")
		SceneManager.disconnect("update_joints", get_parent(), "update_joints")
		SceneManager.disconnect("update_objects", get_parent(), "update_objects")
		#SceneManager.disconnect("ios", get_parent(), "ios")
		is_checked = false
