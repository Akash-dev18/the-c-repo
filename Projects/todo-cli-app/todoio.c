#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// function to show todo
void showtodo(FILE* fptr) {
  char str[100];

  // clear the buffer before using it
  memset(str, 0, sizeof(str));

   while (fgets(str, sizeof(str), fptr) != NULL) {
        printf("%s", str);

        // clear the buffer for the next read
        memset(str, 0, sizeof(str));
    }
}


// TODO - 
// write a function that appends the passed strign into the file
// *hint* open file in mode a+ -> read and append at bottom
void addtodo(FILE* fptr, char todo[]){



}