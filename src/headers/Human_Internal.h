#pragma once

#include <stdlib.h>
#include <stdio.h>

#include "Model_Internal.h"
#include "Human.h"

struct human {
	Model base;
	int age;
	char *name;
};

void HumanInitialize(Human *this, int id, int age, char *name);

