//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Length of the string: %d\n", count);

    return 0;
}