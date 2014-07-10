/*
 * base.c 1.0 2014/07/09 
 *
 * Copyright (c) 2014 @Chemaclass
 * José María Valera Reales <chemaclass@outlook.es>
 *
 * This code is free software.
 */
#include "headers/base.h"

void println(char * line){
    printf("%s\n", line);
}

void printChapter(char * param) {
    char string[20] = " CHAPTER: ";
    strcat(string, param);
    logInfo(string);
}

void printPart(char * param){
    char string[20] = "> Part: ";
    strcat(string, param);
    logInfo(param);
}
