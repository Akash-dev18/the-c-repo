#include<stdio.h>
#include"util.h"
int main() {
	
	int a;
	int b;
	printf("Give 2 num to sum: ");

	scanf("%d%d", &a, &b);

	
	printf("%d", sum(&a, &b));

}
