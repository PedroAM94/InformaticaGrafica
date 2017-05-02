#pragma once

class Model {
	public:
		Model::Model();
		Model::Model(GLchar* path);
		void Model::Draw(Shader, GLint);
		void Model::loadModel(string);
		void Model::processNode(aiNode*, const aiScene*);
		Mesh Model::processMesh(aiMesh*, const aiScene*);
		vector<Texture> Model::loadMaterialTextures(aiMaterial*, aiTextureType, string);
		GLint Model::TextureFromFile(const char*, string);


};