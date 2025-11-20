//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 1000
#define MAX_WORD_LENGTH 1000

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    char longestWord[MAX_WORD_LENGTH];
    char currentWord[MAX_WORD_LENGTH];
    int currentWordLength = 0;
    int longestWordLength = 0;
    int i, j;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n' && sentence[i] != '\r') {
            currentWord[currentWordLength] = sentence[i];
            currentWordLength++;
        } else {
            currentWord[currentWordLength] = '\0';
            if (currentWordLength > longestWordLength) {
                longestWordLength = currentWordLength;
                strcpy(longestWord, currentWord);
            }
            currentWordLength = 0;
        }
    }

    currentWord[currentWordLength] = '\0';
    if (currentWordLength > longestWordLength) {
        longestWordLength = currentWordLength;
        strcpy(longestWord, currentWord);
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length of longest word: %d\n", longestWordLength);

    return 0;
}