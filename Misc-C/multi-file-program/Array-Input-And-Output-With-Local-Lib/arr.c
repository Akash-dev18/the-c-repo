#include<stdio.h>
#include"util.h"
int main() {
	
	int n;
	printf("Give Size: ");
	scanf("%d", &n);
	int arr[n];	

	arrin(n, &arr[2]);
	arrout(n, &arr[0]);

	arrin(n, &arr[0]);
	arrout(n, &arr[0]);


	// arr == &arr[0]
	// arr[0] == *arr == *(arr + 0)
	// arr[1] == *arr == *(arr + 1)
	arrin(n, arr);
	arrout(n, arr);
}
