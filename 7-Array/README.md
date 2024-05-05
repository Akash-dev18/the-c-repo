## Arrays and Pointers are very similar

```c

int arr[10];

// arr is the adress of the fist element of the array
arr == &arr[0]

// we can perform pointer arithmatic 
arr[0] == *arr == *(arr + 0)
arr[1] == *(arr + 1)


myfun(n, arr); // we are passing the adress of fist element to a function, as array decays into a pointer in function

```
