extends Camera
# Declare member variables here. Examples:
# var a = 2
# var b = "text"
# Called when the node enters the scene tree for the first time.
func _ready():
    pass # Replace with function body.
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
    if(Input.is_key_pressed(KEY_UP)):
        self.translate(Vector3(0,0.01,0))
    
    if(Input.is_key_pressed(KEY_DOWN)):
        self.translate(Vector3(0,-0.01,0))  
    
    if(Input.is_key_pressed(KEY_LEFT)):
        self.translate(Vector3(-0.01,0,0))
    
    if(Input.is_key_pressed(KEY_RIGHT)):
        self.translate(Vector3(0.01,0,0))
        
    if(Input.is_key_pressed(KEY_W)):
        self.translate(Vector3(0,0,-0.01))
    
    if(Input.is_key_pressed(KEY_S)):
        self.translate(Vector3(0,0,0.01))
        
    if(Input.is_key_pressed(KEY_A)):
        self.rotate_y(-0.01)    
    if(Input.is_key_pressed(KEY_D)):
        self.rotate_y(0.01);
        
    if(Input.is_key_pressed(KEY_Q)):
        self.rotate_x(-0.01)    
    if(Input.is_key_pressed(KEY_E)):
        self.rotate_x(0.01);
