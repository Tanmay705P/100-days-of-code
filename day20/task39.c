//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int number;
    long long product_of_odd_digits = 1; 
    int digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The number contains no odd digits. Product is 1 (conventionally).\n");
        return 0;
    }

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10; 

        if (digit % 2 != 0) { 
            product_of_odd_digits *= digit; 
        }

        number /= 10; 
    }

    if (product_of_odd_digits == 1) { 
        printf("The number contains no odd digits. Product is 1 (conventionally).\n");
    } else {
        printf("Product of odd digits: %lld\n", product_of_odd_digits);
    }

    return 0;
}