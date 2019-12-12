tool
extends Node

static func find_node_path(scene, str_start="", str_end=""):

	for child in scene.get_children():
		var node = _recursive_get_name(child, str_start, str_end)
		if node != null:
			return node

static func _recursive_get_name(node, str_start="", str_end="", current_name = ""):
	# we need to do this because otherwise the child with no owners
	# will not be set
	
	if current_name != "":
		current_name += "/"

	current_name += node.get_name()

	if str_start != "" and str_end != "":
		var start_tmp = str_start + '/'
		var end_tmp = '/'+str_end
		var sub_start = current_name.substr(0,start_tmp.length())
		var sub_end = current_name.substr(max(0,current_name.length()-end_tmp.length()),end_tmp.length())
		var bool_start = (sub_start == start_tmp)
		var bool_end = (sub_end == end_tmp)
		if bool_start and bool_end:
			return node
	elif str_start != "":
		var sub_start = current_name.substr(0,str_start.length())
		if sub_start == str_start:
			return node
	elif str_end != "":
		var sub_end = current_name.substr(max(0,current_name.length()-str_end.length()),str_end.length())
		if sub_end == str_end:
			return node
	else:
		return

	for child in node.get_children():
		var found_node = _recursive_get_name(child, str_start, str_end, current_name)
		if found_node != null:
			return found_node
