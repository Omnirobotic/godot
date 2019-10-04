tool
extends Spatial
# Declare member variables here. Examples:
# var a = 2
# var b = "text"
const scene = preload('res://UR10_1.aosscn')

export(Array, float) var joints_to_be

var i = 0

var counter = 0

var root_node

#export var root2 = Node().new()
# Called when the node enters the scene tree for the first time.

func _enter_tree():
    print("entering the tree")

    #SceneManager.connect("update_joints", self, "move")    
    #get_tree().get_root().add_child(root_node)
    #print(get_tree().get_current_scene().get_children())
    joints_to_be.clear()
    pass

func _ready():
    print("ready")
    root_node = scene.get_scene()
    get_tree().get_root().call_deferred("add_child", root_node)
    joints_to_be.clear()
    pass

func _process(delta):
    #print(get_tree().get_edited_scene_root().get_children())
    if (i % 100 == 0):
        #print(joints_to_be.size())
        if !joints_to_be.empty():
            #print(get_tree().get_root().get_children())


            #joints_to_be.clear()
            counter += 1

    
func move(joints):
    #print("moved")
#    i = i+1
#    #print(i)
#    if (i % 1 == 0):
#        joints_to_be = joints["joints_value"]
#        #print(joints)
#        var root2 = get_tree().get_root()
#        print(root2.get_children()[0].get_children()[2])
##            var root1 = get_tree().get_root().get_children()[1].get_children()[0]
##            var root0 = get_tree().get_root().get_children()[0]
#
#        var v3= Vector3(0,0,0.1)
#        root2.get_children()[0].get_children()[2].translate(v3)
    if (true):
        if joints["joints_name"].size() != joints["joints_value"].size() :
            print("[ERROR] Different number of joints_value and joints_value!")

        for i in joints["joints_name"].size()-1 :
            var joint_name = joints["joints_name"][i]
            var joint_value = joints["joints_value"][i]
            #print("Setting joint_value : ", joint_value, " for joint : ", joint_name)
            #print(get_tree().get_root().get_children()[1].get_children()[0].get_name())
            #print(joint_name)
            get_tree().get_root().get_node(joint_name).call_deferred("set_joint_value",joint_value)
