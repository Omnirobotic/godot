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
		SceneManager.connect("update_joints", get_parent(), "move")
		is_checked = true
	else:
		print("Disconnecting...")
		SceneManager.disconnect("update_joints", get_parent(), "move")
		is_checked = false
