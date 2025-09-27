//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Prompt the user to enter two numbers
    printf("Enter two integers: ");
    
    // Read the two numbers from the user
    scanf("%d %d", &num1, &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping logic using a third variable
    temp = num1;   // Store the value of num1 in temp
    num1 = num2;   // Assign the value of num2 to num1
    num2 = temp;   // Assign the value of temp (original num1) to num2

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
