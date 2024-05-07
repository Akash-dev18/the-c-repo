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

// function to swap 2 arrays
void swapArr(int arr1[], int arr2[], int n) {
	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];
	int temp[n];

	for(int i = 0; i < n; i++) {
		temp[i] = *(ptr1+i);
		*(ptr1+i) = *(ptr2+i);
		*(ptr2+i) = temp[i];
	}
}

// function to reverse an array
void revArr(int arr[], int n) {
	
	for (int i = 0; i < n/2; i++) {
		swap((arr+i), (arr+((n-1)-i)));
	}

}


// function to sort an array
void sortArr(int arr[], int n) {
	
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}

}
