Write a Single Line to a File
Write a C program that creates a file named single_line.txt and writes the line "This is a single line." to it.

Program:
#include <stdio.h>
int main()
 {
    // Create or open the file "single_line.txt" for writing
    FILE *file = fopen("single_line.txt", "w");

    // Check if the file was successfully opened
    if (file == NULL)
     {
        // If file could not be opened, print an error message and exit
        perror("Error opening file");
        return 1;
    }

    // Write the string to the file
    fprintf(file, "This is a single line.\n");

    // Close the file after writing
    fclose(file);

    // Indicate success
    printf("The line has been written to 'single_line.txt'.\n");

    return 0;
}