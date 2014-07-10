#!/bin/bash

############################
# COMPILE AND EXECUTE      #
#                          #
# by @Chemaclass           #
############################

allSrcFiles=$(ls ./src/*.c)
# Nombres de los ficheros .c
allSrcFilesNames=$(ls -l ./src | awk '{
    split($0,line," ")
    filename = line[9]
    ext = substr(filename,length(filename)-1)
    if (ext == ".c") printf("%s\n", filename)    
}')
echo "All src files are:" $allSrcFilesNames
baseFile="base"
mainFile="main"
std="c99"

function main {
    # if not exists directory, we must create
    if [ ! -d bin ]; then
        mkdir ./bin
    fi 
    # compile
    gcc -Wall -std=$std $allSrcFiles -o ./bin/$mainFile
    # execute if exists
    if [ -f ./bin/$mainFile ]; then
        ./bin/$mainFile
    else
        echo "Doesn't exist the executable ./bin/$mainFile"
    fi
}

echo "================BEGIN==================="
main
echo "=================END===================="

