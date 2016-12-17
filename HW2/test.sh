#!/bin/bash
for f in `cd test/ && ls *.cm && cd ..`
do
    echo "$f"
    ./parser test/$f 2>&1 > "test/$f.txt"
    diff "test/$f.txt" test/"std_result_$f.txt"
    echo "------------------"
done 
