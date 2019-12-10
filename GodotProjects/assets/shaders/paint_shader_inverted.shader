shader_type canvas_item;

uniform sampler2D meshtex_pos;
uniform sampler2D meshtex_normal;
uniform bool first_time = true;
uniform vec4 color = vec4(1.0,1.0,1.0,0.5);
uniform float PI = 3.1415927410125732421875;
uniform sampler2D guns_info;
uniform int nb_of_guns;

float convert_to_float(float wrong, float min_in_value, float max_in_value)
{
	if (!(min_in_value < max_in_value))
	{
		return -1.0;
	}

	float in_value_range = max_in_value - min_in_value;
	return (wrong * in_value_range) + min_in_value;
}

vec3 convert_to(vec3 wrong, float min_in_value, float max_in_value)
{
	vec3 right = vec3(convert_to_float(wrong.x, min_in_value, max_in_value), convert_to_float(wrong.y, min_in_value, max_in_value), convert_to_float(wrong.z, min_in_value, max_in_value));
	return right;
}

const int origin_index_in_gun_info = 0;
vec3 get_gun_origin(int gun_index)
{
    ivec2 coord = ivec2(gun_index, origin_index_in_gun_info);
    vec3 origin = texelFetch(guns_info, coord, 0).rgb;

    return convert_to(origin, -1000.0, 1000.0);
}

const int looking_direction_index_in_gun_info = 1;
vec3 get_gun_looking_direction(int gun_index)
{
    ivec2 coord = ivec2(gun_index, looking_direction_index_in_gun_info);
    vec3 looking_direction = texelFetch(guns_info, coord, 0).rgb;

    return convert_to(looking_direction, -1.0, 1.0);
}

const int height_index_in_gun_info = 2;
vec3 get_gun_height(int gun_index)
{
    ivec2 coord = ivec2(gun_index, height_index_in_gun_info);
    vec3 height = texelFetch(guns_info, coord, 0).rgb;

    return convert_to(height, -1.0, 1.0);
}

const int width_index_in_gun_info = 3;
vec3 get_gun_width(int gun_index)
{
    ivec2 coord = ivec2(gun_index, width_index_in_gun_info);
    vec3 width = texelFetch(guns_info, coord, 0).rgb;

    return convert_to(width, -1.0, 1.0);
}

const int paint_flag_index_in_gun_info = 4;
vec3 get_gun_paint_flag(int gun_index)
{
	vec2 coord = vec2(float(gun_index), float(paint_flag_index_in_gun_info));
	vec3 paint_flag = texture(guns_info, coord).rgb;
	
	return convert_to(paint_flag, 0.0, 1.0);
}

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

	vec4 current_color;
	if (!first_time)
	{
		for (int gun_index = 0; gun_index < nb_of_guns; gun_index++)
		{
			vec3 paint_flag = get_gun_paint_flag(gun_index);
			if (paint_flag.r > 0.1)
			{
				//This is the 3d position of the triangle we're gonna paint on
				vec4 pos4 = texture(meshtex_pos, UV);
				vec3 pos = pos4.rgb;
				
				// Normal of the vertex
				vec3 normal = texture(meshtex_normal, UV).xyz;
				
				// Position of the camera
				vec3 origin = get_gun_origin(gun_index);
				vec3 to = pos - origin;
				vec3 looking_direction = get_gun_looking_direction(gun_index);
				
				float ratio = dot(to, looking_direction/norm(looking_direction));
				
				vec3 height = get_gun_height(gun_index);
				vec3 width = get_gun_width(gun_index);
				vec3 adjusted_height = ratio*height;
				vec3 adjusted_width = ratio*width;
				
				vec3 center_point = origin+ratio*looking_direction;
				
				float x = dot(adjusted_height/norm(adjusted_height), pos-center_point);//*ratio
				float y = dot(adjusted_width/norm(adjusted_width), pos-center_point);//*ratio
				
				float norm_height = norm(adjusted_height);
				float norm_width = norm(adjusted_width);
				
				float sum = x*x/(norm_height*norm_height) + y*y/(norm_width*norm_width);
				
				float dist = distance_between(pos, origin);
				
				float dot_prod = dot(to, normal)/(norm(to)*norm(normal));
				float angle_in_rag = acos(dot_prod);
				float angle_in_deg = angle_in_rag*180.0/PI;
				
				float dist_threshold = 0.3;
				
				bool not_paint = ((sum > 1.0) || (dist > dist_threshold) || (ratio < 0.0) || (dist < 0.0));

				if (!not_paint)
				{
					float multiplier = 2.0/(1.0+sum)-1.0;
					// Add the color from this gun
					current_color = color * vec4(vec3(1.0), multiplier);
				}
			}
		}
		// Set the resulting color
		COLOR = current_color;
	}
}