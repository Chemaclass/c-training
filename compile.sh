#!/bin/bash

############################
# COMPILE AND EXECUTE      #
#                          #
# by @Chemaclass           #
############################

currentDir="."              # Current dir
dirSrc="$currentDir/src"    # Source dir
dirBin="$currentDir/bin"    # Bin dir

# Relative path of c files
allSrcFiles=$(ls $dirSrc/*.c)

# Only the names of c files in src
allSrcFilesNames=$(ls -l $dirSrc | awk '{
    split($0,line," ")
    filename = line[9]
    ext = substr(filename,length(filename)-1)
    if (ext == ".c") printf("%s\n", filename)    
}')

# Print all src c's files names
echo "All src files are:" $allSrcFilesNames

baseFile="base"     # Name of base 'file'.c 
mainFile="main"     # Name of main 'file'.c
std="c99"           # Std to use for our compiler gcc
sizeFile=0          # Size of executable

# Main function 
function main {
    # if not exists directory, we must create
    if [ ! -d $dirBin ]; then
        mkdir $dirBin
    fi 
    # compile
    gcc -Wall -std=$std $allSrcFiles -o $dirBin/$mainFile
    # execute if exists
    if [ -f $dirBin/$mainFile ]; then
        $dirBin/$mainFile
        sizeFile=$(ls -lh $dirBin/$mainFile | cut -d" " -f5)
    else
        echo "Doesn't exist the executable ./bin/$mainFile"
    fi
}

echo "================BEGIN==================="
main
echo "=================END==================== Size: $sizeFile"

