//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *filePointer;
    char character;
    int vowels = 0;
    int consonants = 0;

    filePointer = fopen("input.txt", "r");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((character = fgetc(filePointer)) != EOF) {
        character = tolower(character);

        if (character >= 'a' && character <= 'z') {
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(filePointer);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}