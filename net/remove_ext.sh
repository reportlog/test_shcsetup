#!/bin/bash

for i in `find . -name '*.crt.txt'`; do
echo $i
name=$(basename "$i" .crt.txt)
mv $i $name
done

