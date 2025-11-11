//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h> 

#define MAX_BINARY_LENGTH 32 

int main() {
    char binary[MAX_BINARY_LENGTH + 1]; 
    char onesComplement[MAX_BINARY_LENGTH + 1];
    int i, length, error = 0;

    printf("Enter a binary number (up to %d bits): ", MAX_BINARY_LENGTH);
    scanf("%s", binary);

    length = strlen(binary);

    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Error: Invalid character '%c' in binary number.\n", binary[i]);
            error = 1;
            break; 
        }
    }


    onesComplement[length] = '\0';

    if (error == 0) {
        printf("Original binary: %s\n", binary);
        printf("1's complement: %s\n", onesComplement);
    }

    return 0;
}