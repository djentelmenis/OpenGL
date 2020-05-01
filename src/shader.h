#pragma once

#include <string>
#include <glew/glew.h>

class Shader {
	public:
		Shader(const std::string& fileName);
		virtual ~Shader();

		void Bind();
	private:
		static const unsigned int NUM_SHADERS = 2;
		Shader(const Shader& other) {}
		void operator=(const Shader& other) {}

		std::string LoadShader(const std::string& fileName);
		void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
		GLuint CreateShader(const std::string& text, GLenum shaderType);

		GLuint m_program;
		GLuint m_shaders[NUM_SHADERS];
};

