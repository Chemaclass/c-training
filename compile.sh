#!/bin/bash

############################
# COMPILE AND EXECUTE      #
#                          #
# by @Chemaclass           #
############################

baseFile="./src/base.c"
std="c11"

function __main__ {    
    if [ $1 ]; then
        # if not exists directory, we must create
        if [ ! -d bin ]; then
            mkdir ./bin
        fi 
        # compile
        gcc -Wall -std=$std $baseFile -o ./bin/$1 ./src/$1.c 
        # execute
        ./bin/$1
    else
        echo "?>> Help: $0 <programName>"
    fi
}

echo "================BEGIN==================="
__main__ $1
echo "=================END===================="

