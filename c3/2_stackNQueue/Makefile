all: stack queue simple

stack: linkedList.h linkedList.c naiveStack.c
	gcc -g linkedList.c naiveStack.c -o stack

queue: linkedList.h linkedList.c naiveQueue.c
	gcc -g linkedList.c naiveQueue.c -o queue

simple: simpleSNQ.c
	gcc -g simpleSNQ.c -o simple

clean: 
	rm stack queue simple
