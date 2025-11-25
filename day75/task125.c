//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePointer;
    char textToAppend[100];

    filePointer = fopen("example.txt", "a");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append (max 99 characters): ");
    fgets(textToAppend, sizeof(textToAppend), stdin);

    fprintf(filePointer, "%s", textToAppend);

    fclose(filePointer);

    printf("Text appended successfully.\n");

    return 0;
}