#!/bin/bash

echo "Write your name:"
read user_name
echo "Write how many times you want to display your name:"
read n

# for i in $(seq 1 $n)

for ((i=1; i<=n; i++))
do
    echo "$i Hello $user_name"
done
