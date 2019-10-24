extends Camera
export var sensibility =0.05

var mouse_sens = 0.3

func _ready():
    pass # Replace with function body.
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
    if(Input.is_key_pressed(KEY_E)):
        self.translate(Vector3(0,sensibility,0))
    
    if(Input.is_key_pressed(KEY_Q)):
        self.translate(Vector3(0,-sensibility,0))  
    
    if(Input.is_key_pressed(KEY_A)):
        self.translate(Vector3(-sensibility,0,0))
    
    if(Input.is_key_pressed(KEY_D)):
        self.translate(Vector3(sensibility,0,0))		
        
    if(Input.is_key_pressed(KEY_W)):
        self.translate(Vector3(0,0,-sensibility))
    
    if(Input.is_key_pressed(KEY_S)):
        self.translate(Vector3(0,0,sensibility))
        
#    if(Input.is_key_pressed(KEY_A)):
#        self.rotate_y(-sensibility/3)    
#    if(Input.is_key_pressed(KEY_D)):
#        self.rotate_y(sensibility/3);
        
    if(Input.is_key_pressed(KEY_LEFT)):
        self.rotate_x(-sensibility/3)    
    if(Input.is_key_pressed(KEY_RIGHT)):
        self.rotate_x(sensibility/3);

func _input(event):         
    if event is InputEventMouseMotion and (Input.is_mouse_button_pressed(BUTTON_LEFT) or Input.is_mouse_button_pressed(BUTTON_MIDDLE)):
        self.rotate_z(deg2rad(-event.relative.x*mouse_sens))
        var global_minus_z = self.to_local(Vector3(0,0,-1))
        self.rotate_object_local(Vector3(1,0,0),deg2rad(-event.relative.y*mouse_sens))

    if event is InputEventMouseButton:
        if event.is_pressed():
            # zoom in
            if event.button_index == BUTTON_WHEEL_UP:
                self.translate(Vector3(0,0,-sensibility*10))
            # zoom out
            if event.button_index == BUTTON_WHEEL_DOWN:
                self.translate(Vector3(0,0, sensibility*10))
    #force origin pivot
    if event is InputEventMouseMotion and (Input.is_mouse_button_pressed(BUTTON_RIGHT)):
        var direction_camera = self.to_global(Vector3(0,0,0))
        var distance = direction_camera.length()
        var displacement = self.to_global(Vector3(-event.relative.x*mouse_sens/10.0,-event.relative.y*mouse_sens/10.0,0))
        var new_pos = direction_camera + displacement
        var normalize = new_pos.normalized() * distance;
        self.look_at_from_position(normalize,Vector3(0,0,0),Vector3(0,1,0))
        
