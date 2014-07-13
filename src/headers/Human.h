#pragma once

#include "Human_Internal.h"

// Constructors
Human *HumanCreateEmpty();
Human *HumanCreate(int id, int age, char *name);

// Getters & Setters
void HumanSetAge(Human *this, int age);
int HumanGetAge(const Human *this);

void HumanSetName(Human *this, char *name);
char * HumanGetName(const Human *this);

// toString()
void HumanToString(const Human *this);

// Free()
void HumanFree(Human *this);

