#pragma once

#include <stdlib.h>
#include <stdio.h>

#include "Model_Internal.h"

typedef struct {
	Model base;
	int age;
	char *name;
} Human;

Human * mallocNewHuman();

void HumanInitialize(Human *this, int id, int age, char *name);

