4-swap-with-ptr.o: 4-swap-with-ptr.c
	gcc -c 4-swap-with-ptr.c

4.out: 4-swap-with-ptr.o util.o
	gcc 4-swap-with-ptr.o util.o -o 4.out
	./4.out

6-copy-arry-to-another.o: 6-copy-arry-to-another.c
	gcc -c 6-copy-arry-to-another.c

6.out: 6-copy-arry-to-another.o arrio.o
	gcc 6-copy-arry-to-another.o arrio.o -o 6.out
	./6.out

arrio.o: arrio.c
	gcc -c arrio.c

1-array-io-using-poiner.o: 1-array-io-using-poiner.c
	gcc 1-array-io-using-poiner.c -c

1.out: arrio.o 1-array-io-using-poiner.o
	gcc arrio.o 1-array-io-using-poiner.o -o 1.out
	./1.out

3-sum-with-ptr.o: 3-sum-with-ptr.c
	gcc -c 3-sum-with-ptr.c

util.o: util.c
	gcc -c util.c

3.out: util.o 3-sum-with-ptr.o
	gcc util.o 3-sum-with-ptr.o -o 3.out
	./3.out

clean: 
	rm  *.out  *.o
