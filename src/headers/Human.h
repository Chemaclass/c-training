#pragma once

#include "Human_Internal.h"

Human *HumanCreateEmpty();
Human *HumanCreate(int id, int age, char *name);

void HumanSetAge(Human *this, int age);
void HumanSetName(Human *this, char *name);
void HumanFree(Human *this);
void HumanToString(const Human *this);
