#version 330 core
out vec4 FragColor;
in vec3 vertexColor; // we set this variable in the OpenGL code.

void main()
{
	FragColor = vec4(vertexColor, 1.0f);
}