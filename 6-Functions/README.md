## Arrays as arg
- when we pass array into the function it decays into a pointer
- it does so because, passing the entire arry and creating a copy of it is very inefficient as the array could be very big... so instead address of  the 1st element of an array is passed ( arr, &arr[0], int *ptr = arr[0] , ptr )
