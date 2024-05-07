#include<stdio.h>
#include"arrio.h"
#include"util.h"

int main() {
	
	int arr[4] = {1, 2, 3, 4};
	
	// check before reverse
	arrout(arr, 4);
	
	// reverse the array
	revArr(arr, 4);	

	// check after reverse
	arrout(arr, 4);
	
}
