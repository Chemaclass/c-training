#pragma once

typedef struct model Model;

Model * ModelCreate(int id);

void ModelSetId(Model *this, int id);

void ModelFree(Model *this);

void ModelToString(const Model *this);
