//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *fptr;
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: Could not open file \"%s\". File may not exist or permissions are insufficient.\n", filename);
    } else {
        printf("Content of \"%s\":\n", filename);
        while ((ch = fgetc(fptr)) != EOF) {
            printf("%c", ch);
        }
        fclose(fptr);
    }

    return 0;
}