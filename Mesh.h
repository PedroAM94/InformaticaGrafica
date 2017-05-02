#pragma once

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

	public:
	Mesh::Mesh(vector<Vertex>, vector<GLuint>, vector<Texture>);
	void Mesh::setupMesh();
	void Mesh::Draw(Shader, GLint);

};