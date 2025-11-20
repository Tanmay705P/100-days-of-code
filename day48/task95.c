//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        free(temp);
        return 1;
    } else {
        free(temp);
        return 0;
    }
}

int main() {
    char str1[] = "abcde";
    char str2[] = "cdeab";
    char str3[] = "abced";

    if (areRotations(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\"\n", str2, str1);
    }

    if (areRotations(str1, str3)) {
        printf("\"%s\" is a rotation of \"%s\"\n", str3, str1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\"\n", str3, str1);
    }

    return 0;
}