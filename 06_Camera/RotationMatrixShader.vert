#version 330 core
layout(location = 0) in vec3 aPos;
layout(location = 1) in vec3 aColor;
layout(location = 2) in vec2 aTexCoord;

out vec2 TexCoord;
out vec3 vertexColor;
uniform mat4 transMat;

void main() {
	gl_Position = transMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);
	vertexColor = aColor; 
	TexCoord = aTexCoord;
}