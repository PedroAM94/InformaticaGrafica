#pragma once
#include "Mesh.h"
#include <SOIL.h>
//#include ".\assimp\Importer.hpp"
//#include ".\assimp\scene.h"
//#include ".\assimp\postprocess.h"
#include "..\assimp\include\assimp\Importer.hpp"
#include "..\assimp\include\assimp\scene.h"
#include "..\assimp\include\assimp\postprocess.h"


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
		string directory;
		vector <Mesh> meshes;


};