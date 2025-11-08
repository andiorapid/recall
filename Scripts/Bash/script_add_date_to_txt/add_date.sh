#!/bin/bash

date=$(date +%F)

shopt -s nullglob

for file in *.txt
do
    newfilename="${date}_${file}"
    mv "${file}" "$newfilename"
done
