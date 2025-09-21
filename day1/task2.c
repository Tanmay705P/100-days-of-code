#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient; // Use float for quotient to handle decimal values

    // Prompt the user for input
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate sum, difference, and product
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Calculate quotient, handling division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2; // Cast to float for floating-point division
    } else {
        printf("Division by zero is not possible.\n");
        return 1; // Indicate an error
    }

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient); // Display quotient with two decimal places

    return 0; // Indicate successful execution
}