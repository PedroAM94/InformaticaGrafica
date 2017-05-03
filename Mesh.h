#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "Shader.h"
#include <GL\glew.h>
#include <gtc\matrix_transform.hpp>
#include <glm.hpp>
#include "..\assimp\include\assimp\types.h"

struct Vertex
{
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};

struct Texture
{
	GLuint id;
	string type;
	aiString path;
};

class Mesh {
	private:
		vector<Vertex> vertices;
		vector<GLuint> indices;
		vector<Texture> textures;
		GLuint VBO, EBO, VAO;

	public:
	Mesh::Mesh(vector<Vertex>, vector<GLuint>, vector<Texture>);
	void Mesh::setupMesh();
	void Mesh::Draw(Shader, GLint);

};