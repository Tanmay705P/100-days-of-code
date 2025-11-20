//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[] = "This is a sample sentence";
    int len = strlen(sentence);
    char* wordStart = sentence;
    char* current = sentence;

    while (*current != '\0') {
        if (*current == ' ') {
            reverseWord(wordStart, current - 1);
            wordStart = current + 1;
        }
        current++;
    }
    reverseWord(wordStart, current - 1);

    printf("%s\n", sentence);

    return 0;
}