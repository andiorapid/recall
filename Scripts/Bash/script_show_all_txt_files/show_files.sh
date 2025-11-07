#!/bin/bash

count=$(ls *.txt 2>/dev/null | wc -l)

if [ "$count" -eq 0 ]; then
    echo "No txt files"
else
    for i in *.txt
    do
        echo "File: $i"
    done
fi
