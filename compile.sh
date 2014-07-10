#!/bin/bash

############################
# COMPILE AND EXECUTE      #
#                          #
# by @Chemaclass           #
############################

baseFile="./src/base.c"
std="c99"

function __main__ {    
    if [ $1 ]; then
        # if not exists directory, we must create
        if [ ! -d bin ]; then
            mkdir ./bin
        fi 
        # compile
        gcc -Wall -std=$std $baseFile -o ./bin/$1 ./src/$1.c 
        # execute if exists
        if [ -f ./bin/$1 ]; then
            ./bin/$1
        else
            echo "Doesn't exist the executable $1"
        fi
    else
        echo "?>> Help: $0 <programName>"
    fi
}

echo "================BEGIN==================="
__main__ $1
echo "=================END===================="

