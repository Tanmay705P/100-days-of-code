//Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    if (strlen(name) > 0 && name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    if (strlen(name) > 0) {
        printf("%c", toupper(name[0]));
        for (i = 1; i < strlen(name); i++) {
            if (isspace(name[i - 1]) && !isspace(name[i])) {
                printf("%c", toupper(name[i]));
            }
        }
    }
    printf("\n");

    return 0;
}