#!/bin/bash

mkdir -p logsdir
shopt -s nullglob

log_files=(*.log)

if [ ${#log_files[@]} -eq 0 ]; then
    echo "Did not found any logs"
else
    for file in ${log_files[@]}
    do
        mv "$file" logsdir/
        echo "$file moved to logsdir"
    done
fi
