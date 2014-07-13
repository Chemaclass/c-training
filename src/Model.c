#include "headers/Model_Internal.h"

Model * mallocNewModel() {
	return (Model*) malloc(sizeof(Model));
}

//Constructor
Model * ModelCreateEmpty() {
	Model * newModel = mallocNewModel();
	ModelInicialize(newModel, 0);
	return newModel;
}

Model * ModelCreate(int id) {
	Model * newModel = mallocNewModel();
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
