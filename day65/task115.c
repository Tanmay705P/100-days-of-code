//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[101];
    char t[101];
    int freq_s[26] = {0};
    int freq_t[26] = {0};
    int i;

    scanf("%s", s);
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        freq_s[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++) {
        freq_t[t[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq_s[i] != freq_t[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}