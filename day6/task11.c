//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h> 

int main() {
    int num; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd using the modulus operator
    if (num % 2 == 0) {
        // If the remainder when divided by 2 is 0, the number is even
        printf("%d is an even number.\n", num);
    } else {
        // Otherwise, the number is odd
        printf("%d is an odd number.\n", num);
    }

    return 0; 
}