//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int number, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("%d is not a perfect number.\n", number);
        return 0;
    }

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}