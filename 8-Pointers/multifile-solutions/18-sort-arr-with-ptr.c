#include<stdio.h>
#include"arrio.h"
#include"util.h"

int main() {
	int arr[5] = {1, 2, 4, 6, 3};
	
	// check arr before sorting
	arrout(arr, 5);	

	sortArr(arr, 5);
	
	// check arr before sorting
	arrout(arr, 5);	
		
}
