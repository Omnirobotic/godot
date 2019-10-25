shader_type canvas_item;

uniform sampler2D meshtex_pos;
uniform sampler2D meshtex_normal;
uniform vec3 origin;
uniform bool first_time = true;
uniform bool paint_flag = false;
uniform vec3 looking_direction;
uniform vec3 height;
uniform vec3 width;
uniform vec4 color = vec4(1.0,1.0,1.0,0.5);

float distance_between(vec3 from, vec3 to)
{
	vec3 diff = to - from;
	return sqrt(diff.x*diff.x+diff.y*diff.y+diff.z*diff.z);
}

float norm(vec3 vector)
{
	return sqrt(vector.x*vector.x+vector.y*vector.y+vector.z*vector.z);
}

void fragment()
{
	if (first_time)
	{
		COLOR = vec4(0.9,0.9,0.9,1.0);
	}
	
	if (!first_time)
	{
		//This is the 3d position of the triangle we're gonna paint on
		vec4 pos4 = texture(meshtex_pos, UV);
		if (pos4.a == 0.0)
		{
			discard; //TODO better idea would be to multiply the end result with pos4.a to get anti aliased drawing across seams
		}	
		vec3 pos = pos4.rgb;
		
		// Normal of the vertex
		vec3 normal = texture(meshtex_normal, UV).xyz;
		
		vec3 to = pos - origin;
		float ratio = dot(to, looking_direction/norm(looking_direction));
		
		vec3 adjusted_height = ratio*height;
		vec3 adjusted_width = ratio*width;
		
		vec3 center_point = origin+ratio*looking_direction;
		
		float x = dot(adjusted_height/norm(adjusted_height), pos-center_point);//*ratio
		float y = dot(adjusted_width/norm(adjusted_width), pos-center_point);//*ratio
		
		float norm_height = norm(adjusted_height);
		float norm_width = norm(adjusted_width);
		
		float sum = x*x/(norm_height*norm_height) + y*y/(norm_width*norm_width);
		
		float dist = distance_between(pos, origin);
		
		float threshold = 1.0;
		
		if (sum > 1.0 || ratio > threshold)
		{
			COLOR = vec4(1.0,0.0,0.0,0.0);
		}
		else
		{
			float multiplier = 2.0/(1.0+sum)-1.0;
			multiplier = multiplier * (dist-threshold)*(dist-threshold)/(threshold*threshold);
			COLOR = color* vec4(vec3(1.0), multiplier);
		}
	}
}