shader_type canvas_item;

uniform sampler2D meshtex_pos;
uniform sampler2D meshtex_normal;
uniform bool first_time = true;
uniform vec4 color = vec4(1.0,1.0,1.0,0.5);
uniform float PI = 3.1415927410125732421875;
uniform sampler2D guns_info;
uniform int nb_of_guns;

const int origin_index_in_gun_info = 0;
vec3 get_gun_origin(int gun_index)
{
	vec2 pixel_size = 1.0 / vec2(textureSize(guns_info, 0));
    vec2 coord = vec2(float(gun_index), float(origin_index_in_gun_info));
	coord = vec2(float(gun_index) * pixel_size.x, float(origin_index_in_gun_info) * pixel_size.y);
    vec3 origin = texture(guns_info, coord).rgb;

    return origin;
}

const int looking_direction_index_in_gun_info = 1;
vec3 get_gun_looking_direction(int gun_index)
{
	vec2 pixel_size = 1.0 / vec2(textureSize(guns_info, 0));
    vec2 coord = vec2(float(gun_index), float(looking_direction_index_in_gun_info));
	coord = vec2(float(gun_index) * pixel_size.x, float(looking_direction_index_in_gun_info) * pixel_size.y);
    vec3 looking_direction = texture(guns_info, coord, 0).rgb;

    return looking_direction;
}

const int height_index_in_gun_info = 2;
vec3 get_gun_height(int gun_index)
{
	vec2 pixel_size = 1.0 / vec2(textureSize(guns_info, 0));
    vec2 coord = vec2(float(gun_index), float(height_index_in_gun_info));
	coord = vec2(float(gun_index) * pixel_size.x, float(height_index_in_gun_info) * pixel_size.y);
    vec3 height = texture(guns_info, coord).rgb;

    return height;
}

const int width_index_in_gun_info = 3;
vec3 get_gun_width(int gun_index)
{
	vec2 pixel_size = 1.0 / vec2(textureSize(guns_info, 0));
    vec2 coord = vec2(float(gun_index), float(width_index_in_gun_info));
	coord = vec2(float(gun_index) * pixel_size.x, float(width_index_in_gun_info) * pixel_size.y);
    vec3 width = texture(guns_info, coord).rgb;

    return width;
}

const int paint_flag_index_in_gun_info = 4;
bool get_gun_paint_flag(int gun_index)
{
    vec2 coord = vec2(float(gun_index), float(paint_flag_index_in_gun_info));
    float paint_flag = texture(guns_info, coord).r;

	bool paint_flag_bool;
	if (paint_flag > 0.5)
	{
	 	paint_flag_bool = true;
	}
	else
	{
		paint_flag_bool = false;
	}
    return paint_flag_bool;
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
			bool paint_flag = get_gun_paint_flag(gun_index);
			if (paint_flag)
			{
				//This is the 3d position of the triangle we're gonna paint on
				vec4 pos4 = texture(meshtex_pos, UV);

				vec3 pos = pos4.rgb;
				
				// Normal of the vertex
				// not using at the moment
				vec3 normal = texture(meshtex_normal, UV).xyz;
				
				vec3 origin = get_gun_origin(gun_index);
				vec3 to = pos - origin;
				vec3 looking_direction = get_gun_looking_direction(gun_index);
				//looking_direction = vec3(0.0, 0.0, -1.0);
				float ratio = dot(to, looking_direction/norm(looking_direction));
				
				vec3 height = get_gun_height(gun_index);
				//height = vec3(1.0, 0.0, 0.0);
				vec3 width = get_gun_width(gun_index);
				//width = vec3(0.0, 0.1, 0.0);
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
				
				float threshold = 0.5;
				
				bool not_paint = ((sum > 0.5) || (dist > threshold) || (ratio<0.0) || (dist < 0.0));
				bool not_paint_2 = ((sum > 1.0) || (dist > threshold) || (ratio<0.0) || (dist < 0.0));
				
				if (!not_paint_2)
				{
					float multiplier = 2.0/(1.0+sum)-1.0;
					//multiplier = multiplier * (dist-threshold)*(dist-threshold)/(threshold*threshold);
					// Add the color from this gun
					current_color = vec4(1.0, 0.0, 0.0, 1.0) * vec4(vec3(1.0), multiplier);
				}
				if (!not_paint)
				{
					float multiplier = 2.0/(1.0+sum)-1.0;
					//multiplier = multiplier * (dist-threshold)*(dist-threshold)/(threshold*threshold);
					// Add the color from this gun
					current_color = color * vec4(vec3(1.0), multiplier);
				}
			}
			//else
			//{
			//	vec2 coord = vec2(float(gun_index), float(paint_flag_index_in_gun_info));
			//	float paint_flag_test = texture(guns_info, coord).r;
			//	COLOR = vec4(1.0, 0.0, 0.0, 1.0);
			//}
		}
		// Set the resulting color
		COLOR = current_color;
	}
}