#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define the file pointer
    FILE *file;
    // Define a character to read each character from the file
    int ch;

    // Open the file in read mode
    file = fopen("./file.txt", "r");
    
    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read and print each character until end of file (EOF)
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}
