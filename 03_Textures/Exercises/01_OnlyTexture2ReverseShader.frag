#version 330 core
out vec4 FragColor;
in vec3 vertexColor;
in vec2 TexCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;
void main()
{
	vec2 reversedTex = vec2(1.0-TexCoord.x, TexCoord.y);
	FragColor = mix(texture(texture1, TexCoord),
	texture(texture2, reversedTex) , 0.2);
}