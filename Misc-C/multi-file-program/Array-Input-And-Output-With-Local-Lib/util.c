#include<stdio.h>
// Takes input till n (elements)
void arrin(int n, int arr[]){
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
}

// Ouput all elements of a array
void arrout(int n, int arr[]){
	
	for(int i=0; i<n; i++){
		printf(" %d ", arr[i]);
	}
	
}
