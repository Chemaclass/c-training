/*
 * structs.c 1.0 2014/07/10  
 *
 * Copyright (c) 2014 @Chemaclass
 * José María Valera Reales <chemaclass@outlook.es>
 *
 * This code is free software.
 */
#include "headers/base.h"
#include "headers/structs.h"

typedef struct {
    int age;
    char * name;
} Human;

void printHuman(Human h);

void structsMain(){
    printChapter("Structs");
    
    // First method of construct
    Human h;
    h.age = 21;
    h.name = "Chema";
    printHuman(h);
     // Second
    Human h2 = { .name = "Juan", .age = 20 };
    printHuman(h2);
     // Third
    Human * h3 = malloc(sizeof(Human));
    h3->name = "Jesus";
    h3->age = 18;
    printHuman(*h3);
    free(h3);
}

void printHuman(Human h) {
    printf("Human {.name: %s, .age: %d}\n", h.name, h.age);
}

