#include "headers/Model_Internal.h"

//Constructor
Model * ModelCreate(int id) {
	Model * newModel = (Model*) malloc(sizeof(Model));
	ModelInicialize(newModel, id);
	return newModel;
}

void ModelInicialize(Model *this, int id) {
	this->id = id;
}

void ModelSetId(Model *this, int id) {
	this->id = id;
}

void ModelFree(Model *this) {
	free(this);
}

void ModelToString(const Model *this) {
    printf("Model {.id: %d}\n", this->id);
}
