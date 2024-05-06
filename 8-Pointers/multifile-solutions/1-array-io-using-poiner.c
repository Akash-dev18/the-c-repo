#include<stdio.h>
#include"arrio.h"
int main() {
	int n;
	printf("Give Size");
	scanf("%d", &n);

	int arr[n];
	
	int* ptr = &arr[0];

	arrin(ptr, n);
	arrout(arr, n);	
}
