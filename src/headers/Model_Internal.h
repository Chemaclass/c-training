#pragma once

#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int id;
} Model;

Model * mallocNewModel();

void ModelInicialize(Model *this, int id);

