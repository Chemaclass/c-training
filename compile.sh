#!/bin/bash

############################
# COMPILAR Y EJECUTAR      #
#                          #
# by @Chemaclass           #
############################

baseFile="./src/base.c"
std="c11"

function __main__ {    
    if [ $1 ]; then
        # compilamos
        gcc -Wall -std=$std $baseFile -o ./bin/$1 ./src/$1.c 
        # ejecutamos
        ./bin/$1
    else
        echo "?>> Help: $0 <programName>"
    fi
}

echo "================BEGIN==================="
__main__ $1
echo "=================END===================="

