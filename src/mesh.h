#pragma once

#include <glm/glm.hpp>
#include <glew/glew.h>

class Vertex {
	public:
		Vertex(const glm::vec3& pos) {
			this->pos = pos;
		}
	private:
		glm::vec3 pos;
};

class Mesh {
	public:
		Mesh(Vertex* vertices, unsigned int numVertices);
		virtual ~Mesh();

		void Draw();
	private:
		Mesh(const Mesh& other) {}
		void operator=(const Mesh& other) {}

		enum {
			POSITION_VB,

			NUM_BUFFERS
		};

		GLuint m_vertexArrayObject;
		GLuint m_vertexArrayBuffers[NUM_BUFFERS];
		unsigned int m_drawCount;
};

