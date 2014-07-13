#pragma once

#include "Model_Internal.h"

Model *ModelCreateEmpty();
Model *ModelCreate(int id);

void ModelSetId(Model *this, int id);
int ModelGetId(const Model *this);

void ModelToString(const Model *this);

void ModelFree(Model *this);

