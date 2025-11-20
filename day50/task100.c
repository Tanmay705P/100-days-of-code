//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int n = strlen(str);
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

