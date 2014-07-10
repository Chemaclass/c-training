/*
 * base.h 1.0 2014/07/09 
 *
 * Copyright (c) 2014 @Chemaclass
 * José María Valera Reales <chemaclass@outlook.es>
 *
 * This code is free software.
 */
#ifndef BASE_HEADER
#define BASE_HEADER

// Librerías genéricas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Colores  ANSI
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define RESET "\033[0m"

// Logs
#define logDefault(str) printf("%s%s%s\n",ANSI_COLOR_MAGENTA,str,RESET)
#define logInfo(str) printf("%s%s%s\n",ANSI_COLOR_BLUE,str,RESET)
#define logSuccess(str) printf("%s%s%s\n",ANSI_COLOR_GREEN,str,RESET)
#define logWarning(str) printf("%s%s%s\n",ANSI_COLOR_YELLOW,str,RESET)
#define logError(str) printf("%s%s%s\n",ANSI_COLOR_RED,str,RESET)

void println(char *line);
void printChapter(char * str);
void printPart(char * str);

#endif
