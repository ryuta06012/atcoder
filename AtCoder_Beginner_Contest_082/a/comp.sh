#!/bin/sh

esc=$(printf '\033')
green="${esc}[32m"
red="${esc}[31m"
normal="${esc}[0m"


for i in `seq ${1}`;
do
	./a.out < test${i}.txt > autput${i}.txt
	diff answer${i}.txt autput${i}.txt > /dev/null 2>&1
	if [ $? -eq 0 ]; then
		echo "test${i}.txt: $green[OK]$normal"
	elif [ $? -eq 1 ]; then
		echo "test${i}.txt: $red[NG]$normal"
	fi
done