#include <stdio.h>

int main() {
    float num1, num2; // Declare variables to store the two numbers

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1); // Read the first number

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%f", &num2); // Read the second number

    // Calculate and display the sum
    printf("Sum: %.2f\n", num1 + num2);

    // Calculate and display the difference
    printf("Difference: %.2f\n", num1 - num2);

    // Calculate and display the product
    printf("Product: %.2f\n", num1 * num2);

    // Calculate and display the quotient, handling division by zero
    if (num2 != 0) {
        printf("Quotient: %.2f\n", num1 / num2);
    } else {
        printf("Quotient: Division by zero is not allowed.\n");
    }

    return 0; // Indicate successful program execution
}