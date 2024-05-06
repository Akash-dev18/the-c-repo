#include<stdio.h>


// funtion to take input array
void arrin(int arr[], int n){
	
	for(int i = 0; i < n; i++) {
		scanf("%d", arr+i);
	}
	
}


// function to ouput an array
void arrout(int arr[], int n){
	
	printf("\nYour Array is : ");	
	for(int i = 0; i < n; i++) {
		printf(" %d ", *(arr+i));
	}
	
}

// copy arr1 to arr2 using pointers
void copyArrUsingPointer(int arr1[], int arr2[], int n) {
	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];

	for(int i = 0; i < n; i++ ) {
		*(ptr2 + i) = *(ptr1 + i); // same as arr2[i] = arr1[i]
	}
}
