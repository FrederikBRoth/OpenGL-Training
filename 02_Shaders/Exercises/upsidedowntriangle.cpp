//#pragma once
//#include <glad/glad.h>
//#include <GLFW\glfw3.h>
//#include <iostream>
//#include "../Shader.h"
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
//	float vertices[] = {
//		0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, // bottom right
//		-0.5f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f // top left
//	};
//	unsigned int indices[] = { // note that we start from 0!
//		0, 1, 2, // first triangle
//	};
//	unsigned int VAO;
//	glGenVertexArrays(1, &VAO);
//
//	unsigned int VBO;
//	glGenBuffers(1, &VBO);
//
//	unsigned int EBO;
//	glGenBuffers(1, &EBO);
//
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//Can also be GL_STREAM_DRAW: Only used very little, GL_DYMANIC DRAW: Used a lot, but the data is changed aswell a lot
//	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
//	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
//	glEnableVertexAttribArray(1);
//
//	Shader opposite = Shader("UpsideDownVertShader.vert", "UniformtestFragShader.frag");
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//		processInput(window);
//		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//		opposite.use();
//		//float timeValue = glfwGetTime();
//		//float greenValue = sin(timeValue) / 2.0f + 0.5f;
//		//int vertexColorLocation = glGetUniformLocation(uniformShaderProgram,
//		//	"ourColor");
//		//glUniform4f(vertexColorLocation, 0.0f, greenValue, 0.0f, 1.0f);
//		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
//		glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0);
//
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//	return 0;
//}
//
