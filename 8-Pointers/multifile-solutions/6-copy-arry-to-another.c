#include<stdio.h>
#include"arrio.h"

int main() {

	int arr[5] = { 1, 2, 3, 4, 5};
	arrout(arr, 5);

	int newarr[5];

	// copy using ptr
	copyArrUsingPointer(arr, newarr, 5);

	// print arr after coping
	arrout(newarr, 5);	
	
}
