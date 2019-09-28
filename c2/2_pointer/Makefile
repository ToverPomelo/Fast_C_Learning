all:
	gcc -g ./malloc.c -o malloc
	gcc -g -no-pie ./underFlow.c -o underFlow
	gcc -g ./uaf.c -o uaf
	gcc -g ./double.c -o double
	gcc -g -no-pie ./double2.c -o double2
	gcc -g -m32 ./function.c -o function

clean:
	rm malloc underFlow uaf double double2 function
