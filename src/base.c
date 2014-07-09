/*
 * base.c 1.0 2014/07/09 Chemaclass
 *
 * Copyright (c) 2014
 * José María Valera Reales <chemaclass@outlook.es>
 *
 * This code is free software.
 */
#include "headers/base.h"

void println(char *line){
    printf("%s\n", line);
}

void printChapter(char * param) {
    printf("CHAPTER: %s\n", param);  
}

void printPart(char * param){
    printf("> Part: %s\n", param);
}
