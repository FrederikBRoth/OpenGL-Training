//#pragma once
//#include <glad/glad.h>
//#include <GLFW\glfw3.h>
//#include <iostream>
//#include "../../HelperFunctions.h"
//
//
//void framebuffer_size_callback(GLFWwindow* window, int width, int height)
//{
//	glViewport(0, 0, width, height);
//}
//
//void processInput(GLFWwindow* window) {
//	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
//		glfwSetWindowShouldClose(window, true);
//	}
//}
//unsigned int setupShaders(const char* vertex, const char* fragment) {
//	//Vertex Shader setup
//	std::string vs = getCString(vertex);
//	const char* vertShader = vs.c_str();
//
//	unsigned int vertexShader;
//	vertexShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(vertexShader, 1, &vertShader, NULL);
//	glCompileShader(vertexShader);
//
//
//	//Fragment Shader setup
//	std::string fs = getCString(fragment);
//	const char* fragShader = fs.c_str();
//
//	unsigned int fragmentShader;
//	fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragmentShader, 1, &fragShader, NULL);
//	glCompileShader(fragmentShader);
//
//	//Init Shader Program
//	unsigned int shaderProgram;
//	shaderProgram = glCreateProgram();
//
//	glAttachShader(shaderProgram, vertexShader);
//	glAttachShader(shaderProgram, fragmentShader);
//	glLinkProgram(shaderProgram);
//	glDeleteShader(vertexShader);
//	glDeleteShader(fragmentShader);
//	return shaderProgram;
//}
//
//int main() {
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	// Window setup
//	GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
//	if (window == NULL)
//	{
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return -1;
//	}
//	glfwMakeContextCurrent(window);
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "Failed to initialize GLAD" << std::endl;
//		return -1;
//	}
//	
//	//Triangle setup
//	float vertices1[] = {
//		// first triangle
//		0.5f, 0.5f, 0.0f, // top right
//		0.5f, -0.5f, 0.0f, // bottom right
//		-0.5f, 0.5f, 0.0f
//	};
//	float vertices2[] = {
//		// second triangle
//		0.5f, -0.6f, 0.0f, // bottom right
//		-0.5f, -0.6f, 0.0f, // bottom left
//		-0.5f, 0.4f, 0.0f // top left
//	};
//	
//	
//	unsigned int VAO1;
//	glGenVertexArrays(1, &VAO1);
//	unsigned int VAO2;
//	glGenVertexArrays(1, &VAO2);
//	
//	unsigned int VBO1;
//	glGenBuffers(1, &VBO1);
//	
//	unsigned int VBO2;
//	glGenBuffers(1, &VBO2);
//	
//	
//	
//	glBindVertexArray(VAO1);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO1);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//Can also be GL_STREAM_DRAW: Only used very little, GL_DYMANIC DRAW: Used a lot, but the data is changed aswell a lot
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//	
//	glBindVertexArray(VAO2);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO2);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	//Can also be GL_STREAM_DRAW: Only used very little, GL_DYMANIC DRAW: Used a lot, but the data is changed aswell a lot
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//	
//	unsigned int shaderProgram1 = setupShaders("SimpleVertShader.vert", "SimpleFragShader.frag");
//	unsigned int shaderProgram2 = setupShaders("SimpleVertShader.vert", "Exercises/01-Getting Started/YellowFragShader.frag");
//
//	
//	while (!glfwWindowShouldClose(window))
//	{
//		processInput(window);
//	
//		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//		glUseProgram(shaderProgram1);
//		glBindVertexArray(VAO1);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glUseProgram(shaderProgram2);
//		glBindVertexArray(VAO2);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//	
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//	
//	glfwTerminate();
//	return 0;
//}
