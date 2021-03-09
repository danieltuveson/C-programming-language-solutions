#!/bin/bash

# input will be something.c, get the "something" part
file=$1
filename=${file%.*}

# compile the program
echo "...compiling ${filename}..."
gcc -o $filename $filename.c

# if file compiled successfullly, copy output to bins and run it
if [[ $? == 0 ]] 
then
    mv $filename bins

    echo "...running ${filename}..."
    ./bins/$filename
fi
