extends Spatial

var _paint_flag

# Called when the node enters the scene tree for the first time.
func _ready():
	_paint_flag = false
	pass

func set_paint_flag(value):
	_paint_flag = value

func get_paint_flag():
	return _paint_flag
