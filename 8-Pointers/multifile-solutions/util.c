#include<stdio.h>


// 3.  function to add 2 numbers using pointers
int sum(int* a, int* b) {
	return *a + *b;
}

// 4. swap 2 numbers using pointers
void swap(int* a, int* b) {
	
	int temp = *a;
	*a = *b;
	*b = temp;

}

// 
