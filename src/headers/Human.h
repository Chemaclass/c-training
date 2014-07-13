#pragma once

typedef struct human Human;

Human *HumanCreate(int id, int age, char *name);

void HumanSetAge(Human *this, int age);
void HumanSetName(Human *this, char *name);
void HumanFree(Human *this);
void HumanToString(const Human *this);
