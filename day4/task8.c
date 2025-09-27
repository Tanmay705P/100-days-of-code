//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Prompt the user to enter the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if n is a positive integer
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Calculate the sum using a for loop
    for (i = 1; i <= n; i++) {
        sum += i; // Add each natural number to the sum
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}