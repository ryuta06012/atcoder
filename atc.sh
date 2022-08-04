#!/bin/sh

if [ $# -ne 1 ]; then
  echo "Usage: $0 2xx" 1>&2
  exit 1
fi

if [ -e $1 ]; then
  echo "Error: directory '${1}' exists." 1>&2
  exit 1
fi

mkdir -p $1

for dir in {a,b,c,d};
do
	mkdir -p $1/$dir
	cp -n template.cpp $1/$dir/$dir.cpp
	cp -n comp.sh $1/$dir/comp.sh
	for i in `seq 5`;
	do
		cp -n test.txt $1/$dir/"test${i}.txt"
		cp -n answer.txt $1/$dir/"answer${i}.txt"
	done
done;
