/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*    */
#include <stdio.h>

int main() {
    int lines[] = {1, 3, 5, 3, 1};
    int numLines = sizeof(lines) / sizeof(lines[0]);

    for (int i = 0; i < numLines; i++) {
        for (int j = 0; j < lines[i]; j++) {
            printf("*");
        }
        printf("\n\n");
    }
    return 0;
}