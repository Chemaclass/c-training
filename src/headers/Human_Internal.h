#pragma once

#include <stdlib.h> // neccesary for example for free()
#include <stdio.h> // for example toString()

#include "Model_Internal.h"

typedef struct {
	Model _base;
	int _age;
	char *_name;
} Human;

Human * _mallocNewHuman();

void _HumanInitialize(Human *this, int id, int age, char *name);

