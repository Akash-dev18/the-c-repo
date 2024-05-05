all: run

run: arr.o util.o 
	gcc  arr.o util.o -o run

arr.o: arr.c
	gcc arr.c  -c

util.o: util.c
	gcc util.c -c

clean: 
	rm *.o run
