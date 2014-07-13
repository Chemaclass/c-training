#pragma once

#include <stdlib.h>
#include <stdio.h>

#include "Model_Internal.h"

typedef struct {
	Model base;
	int age;
	char *name;
} Human;

Human * _mallocNewHuman();

void _HumanInitialize(Human *this, int id, int age, char *name);

