#!/bin/sh

for ((i=0;;i++)) do
	echo $i | ./rand > data-$i.in
	./brute < data-$i.in > data-$i.ans
	./solution < data-$i.in > data-$i.out
	if diff data-$i.ans data-$i.out; then
		rm data-$i.{in,out,ans}
	else
		echo "wrong answer on test $i"
		break
	fi
done
