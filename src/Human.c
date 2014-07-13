#include "headers/Human_Internal.h"

Human * _mallocNewHuman() {
	return (Human*) malloc(sizeof(Human));
}

Human * HumanCreateEmpty() {
	Human *newHuman = _mallocNewHuman();
	_HumanInitialize(newHuman, 0, 0, "");
	return newHuman;
}

Human * HumanCreate(int id, int age, char* name) {
	Human *newHuman = _mallocNewHuman();
	_HumanInitialize(newHuman, id, age, name);
	return newHuman;
}

void _HumanInitialize(Human *this, int id, int age, char*name) {
	_ModelInicialize((Model *)this, id);
	this->age = age;
	this->name = name;
}

void HumanSetAge(Human *this, int age) {
	this->age = age;
}

void HumanSetName(Human *this, char *name) {
	this->name = name;
}

void HumanFree(Human *this) {
	free(this);
}

void HumanToString(const Human *this) {
    printf("Human {.name: %s, .age: %d}\n", this->name, this->age);
}
