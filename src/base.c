/*
 * base.c 1.0 2014/07/09 Chemaclass
 *
 * Copyright (c) 2014
 * José María Valera Reales <chemaclass@outlook.es>
 *
 * This code is free software.
 */
#include "headers/base.h"

void printChapter(char * str){    
    logSuccess(strcat("CHAPTER: ", str));
}

void printPart(char * str){
    logInfo(strcat("> Part: ",str));
}

