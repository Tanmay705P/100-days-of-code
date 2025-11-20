//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;
    int last_space_index = -1;
    
    printf("Enter full name: ");
    fgets(name, 100, stdin);

    name[strcspn(name, "\\n")] = 0;

    for (i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            last_space_index = i;
        }
    }

    if (strlen(name) > 0 && !isspace(name[0])) {
        printf("%c", toupper(name[0]));
    }

    for (i = 1; i < last_space_index; i++) {
        if (name[i] == ' ' && !isspace(name[i+1])) {
            printf(".%c", toupper(name[i+1]));
        }
    }

    printf(" %s\\n", name + last_space_index + 1);

    return 0;
}
