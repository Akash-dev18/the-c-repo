#define TODOFILE "./todofile" // to be added dynamically using bash script
#include<stdio.h>
#include"todoio.h"


int main(int argc, char* argv[]) {

  FILE* fptr;
  

  // if cli arguments are passed
  if (argc > 1) {

  }

  // if there are no cli arguments passed
  else {
    fptr = fopen(TODOFILE, "r");
    showtodo(fptr);
    fclose(fptr);
  }

}