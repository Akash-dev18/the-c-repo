#include<stdio.h>
#include<stdlib.h>

#define FILEPATH "./file.txt"

int main() {

  FILE* fptr = NULL;

  /* 

    fopen("path", "mode") - Openign a file
    -> modes 
        -> r - read only
        -> w - overwrite
        -> r+ - read and append on top
        -> w+ - read and overwrite
        -> a+ - read and append at bottom
  
  */ 

  // fscanf(FILE* ptr, "%s", char str[100])
  fptr = fopen(FILEPATH, "r");
  char str[100];
  fscanf(fptr, "%s", str);
  printf("%s\n", str); // line ends when ther is a space , so 1 word
  fclose(fptr);  // close the file




  // fprintf(FILE* ptr, "%s", "this is text") 
  fptr = fopen(FILEPATH, "a+");
  fprintf(fptr, "%s", "\nhello this is amazing");
  fclose(fptr);





  // fgetc(FILE* ptr) -> read a character
  fptr = fopen(FILEPATH, "r");

  char c = fgetc(fptr);
  printf("%c\n", c);// reads the first characer

  c = fgetc(fptr); // if you run again it will read the next character
  printf("%c\n", c);

  fclose(fptr);





  // fgetc(char str[100], 6:length, FILE* ptr) -> read a character
  fptr = fopen(FILEPATH, "r");
  char str1[100];

  fgets(str1, 30, fptr); // reads the  first string / line till length 30
  printf("%s", str1);

  fgets(str1, 30, fptr); // if you run again it will read the next line till length 30 or it previous line has more than 30 it wil print that
  printf("%s", str1);




  // similarly fputc('c', fptr); fputs("this is string", fptr);




}
