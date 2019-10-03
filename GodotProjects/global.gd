tool
extends Node

signal global_move

# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.

func on_root_move():
	print("global move")
	emit_signal("global_move")
