#include<stdio.h>
#include"util.h"

int main() {

	
	int a, b;
	printf("Give me 2 num: ");
	scanf("%d%d", &a, &b);

	// check before swap
	printf("\n a = %d, b= %d", a, b);

	// swap
	swap(&a, &b);
	
	// check after swap
	printf("\n after swap ->  a = %d, b= %d", a, b);
	
}
