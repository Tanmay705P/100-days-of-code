//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    if (n == 0) {
        printf("Length of the longest substring without repeating characters: 0\n");
        return 0;
    }

    int maxLength = 0;
    int charIndex[256];
    int start = 0;

    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int end = 0; end < n; end++) {
        if (charIndex[s[end]] != -1) {
            start = (start > charIndex[s[end]] + 1) ? start : charIndex[s[end]] + 1;
        }
        charIndex[s[end]] = end;
        maxLength = (maxLength > (end - start + 1)) ? maxLength : (end - start + 1);
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLength);

    return 0;
}