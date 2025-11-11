//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int number;
    int digitCounts[10] = {0};
    int tempNumber;
    int mostFrequentDigit = 0;
    int maxCount = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The digit that occurs the most is: 0\n");
        return 0;
    }

    tempNumber = number;
    if (tempNumber < 0) {
        tempNumber = -tempNumber;
    }

    while (tempNumber > 0) {
        int digit = tempNumber % 10;
        digitCounts[digit]++;
        tempNumber /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digitCounts[i] > maxCount) {
            maxCount = digitCounts[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", mostFrequentDigit);

    return 0;
}