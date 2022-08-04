#!/bin/sh

ok = "OK"
no = "NG"
esc =$(printf '\033')
green = "${esc}[32m"
red="${esc}[31m"
normal="{esc}[0m"


for i in `seq ${1}`;
do
	./a.out < "test${1}.txt" > autput.txt
	diff -s "answer${1}.txt" autput.txt
	if [ $? -eq 0 ]; then
		printf "${green}[OK]${normal}\n"
	elif [ $? -eq 1 ]; then
		printf "${green}[NG]${normal}\n"
	fi
done