Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h> // Include the standard input/output library

int main() {
    float celsius, fahrenheit; // Declare variables for Celsius and Fahrenheit temperatures

    // Prompt the user to enter the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); // Read the user's input and store it in the 'celsius' variable

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0; // Use 9.0 and 5.0 to ensure floating-point division

    // Display the converted temperature in Fahrenheit, rounded to two decimal places
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0; // Indicate that the program executed successfully
}
