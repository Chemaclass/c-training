#include "headers/Human.h"

Human * _mallocNewHuman() {
	return (Human*) malloc(sizeof(Human));
}

// Empty Constructor
Human * HumanCreateEmpty() {
	Human *newHuman = _mallocNewHuman();
	_HumanInitialize(newHuman, 0, 0, "");
	return newHuman;
}

// Constructor with params
Human * HumanCreate(int id, int age, char* name) {
	Human *newHuman = _mallocNewHuman();
	_HumanInitialize(newHuman, id, age, name);
	return newHuman;
}

void _HumanInitialize(Human *this, int id, int age, char*name) {
	_ModelInicialize((Model *)this, id);
	this->_age = age;
	this->_name = name;
}

void HumanSetAge(Human *this, int age) {
	this->_age = age;
}

int HumanGetAge(const Human *this){
	return this->_age;
}

void HumanSetName(Human *this, char *name) {
	this->_name = name;
}

char *HumanGetName(const Human *this){
	return this->_name;
}

void HumanFree(Human *this) {
	free(this);
}

void HumanToString(const Human *this) {
    printf("Human {.name: %s, .age: %d}\n", this->_name, this->_age);
}
