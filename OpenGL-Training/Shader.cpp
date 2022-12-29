#include "Shader.h"
std::string getCString(const char* filepath) {
	std::string ShaderCode;
	std::ifstream ShaderCodeStream(filepath, std::ios::in);
	if (ShaderCodeStream.is_open()) {
		std::stringstream sstr;
		sstr << ShaderCodeStream.rdbuf();
		ShaderCode = sstr.str();
		ShaderCodeStream.close();
	}
	else {
		printf("Impossible to open %s. Are you in the right directory ? Don't forget to read the FAQ !\n", filepath);
		return "w";
	}
	return ShaderCode;
}