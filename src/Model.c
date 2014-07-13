#include "headers/Model_Internal.h"

Model * _mallocNewModel() {
	return (Model*) malloc(sizeof(Model));
}

//Constructor
Model * ModelCreateEmpty() {
	Model * newModel = _mallocNewModel();
	_ModelInicialize(newModel, 0);
	return newModel;
}

Model * ModelCreate(int id) {
	Model * newModel = _mallocNewModel();
	_ModelInicialize(newModel, id);
	return newModel;
}

void _ModelInicialize(Model *this, int id) {
	this->_id = id;
}

void ModelSetId(Model *this, int id) {
	this->_id = id;
}

int ModelGetId(const Model *this) {
	return this->_id;
}

void ModelFree(Model *this) {
	free(this);
}

void ModelToString(const Model *this) {
    printf("Model {.id: %d}\n", this->_id);
}
