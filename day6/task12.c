//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    
    scanf("%d", &number);

    // Outer if-else: Check if the number is greater than or equal to zero
    if (number >= 0) {
        // Inner if-else: If the number is non-negative, check if it's zero
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        // If the number is not greater than or equal to zero, it must be negative
        printf("The number is negative.\n");
    }

    return 0;
}