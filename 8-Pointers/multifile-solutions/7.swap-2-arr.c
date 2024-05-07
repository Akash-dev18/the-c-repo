#include<stdio.h>
#include"arrio.h"

int main() {
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {6, 7, 8, 9, 10};
	
	// check arr before swaping
	arrout(arr1, 5);
	arrout(arr2, 5);

	swapArr(arr1, arr2, 5);

	// check arr after swaping
	printf("\n After Swaping the array :- \n ");
	arrout(arr1, 5);
	arrout(arr2, 5);
	
}
