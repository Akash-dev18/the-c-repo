## How to create a local lib 


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

Array.o
	gcc -c Array.c

Fun.o
	gcc -c Fun.c

clean:
	rm -f *.o exec
```

---

