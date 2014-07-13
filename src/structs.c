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
#include "headers/Human.h"

void structsMain(){
    printChapter("Structs");
    
    // First method of construct
    Human h;
    h._age = 21;
    h._name = "Chema";
	HumanToString(&h);
    
    // Second
    Human h2 = { ._name = "Juan", ._age = 20 };
    HumanToString(&h2);
    
    // Third
    Human * h3 = HumanCreateEmpty();
    h3->_name = "Jesus";
    h3->_age = 18;
    HumanToString(h3);
    HumanFree(h3);
    
    // Fourth
    Human * h4 = HumanCreate(1, 17, "Ángel");
    HumanToString(h4);
    HumanFree(h4);
}

