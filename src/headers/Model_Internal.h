#pragma once

#include <stdlib.h> // neccesary for example for free()
#include <stdio.h> // for example toString()

typedef struct {
	int _id;
} Model;

Model * _mallocNewModel();

void _ModelInicialize(Model *this, int id);

