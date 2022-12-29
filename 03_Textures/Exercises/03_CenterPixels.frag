#version 330 core
out vec4 FragColor;
in vec3 vertexColor;
in vec2 TexCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;
void main()
{
	vec2 doubletex = vec2(2.0*TexCoord.x, 2.0*TexCoord.y);
	FragColor = mix(texture(texture1, TexCoord),
	texture(texture2, doubletex) , 0.2);
}