## How to create a local lib 
- just create a .c file and a .h file
- use the .h file using #include"myheader"

---

## Makefile ? 
- Terminology : Rule is target, pre-requisites, recipes
```make
targets: prerequisites
	# recipe - set of command to get that file
```

- Example say Array.c and Fun.c are need to be compiled into Array.c and Fun.o then linked together to form a executable file, so to make a executable file we need Array.o and Fun.o wich in turn need Array.c and Fun.c

```make
all: exec

exec: Array.o Fun.o
	gcc Array.o Fun.o -o exec

Array.o:
	gcc -c Array.c

Fun.o:
	gcc -c Fun.c

clean:
	rm -f *.o exec
```

---

## Reading Cli agrs ?
- int mian take 2 args
	- int argc: gives argument count
	- char\* argv[]: this gives the atguments passed

```c
	int main(int argc, char* argv[]){
		printf(" arg count: %d", argc);
		printf(" arg given: %s", argv[1]);
	}
```

- this example can be used like
```bash
	./a.out hello
	# arg count: 1 arg given: hello
```
