#pragma once

#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int _id;
} Model;

Model * _mallocNewModel();

void _ModelInicialize(Model *this, int id);

