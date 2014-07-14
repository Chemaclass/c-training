/*
 * main.c 1.0 2014/07/10  
 *
 * Copyright (c) 2014 @Chemaclass
 * José María Valera Reales <chemaclass@outlook.es>
 *
 * This code is free software.
 */
#include "headers/base.h"
#include "headers/structs.h"
#include "headers/lists.h"
#include "headers/forks.h"

int main(int argc, char *argv[]) {
    logSuccess("C Programming Language");
    structsMain();
    listsMain();
    forksMain();
    return 0;
}

