#include <stdio.h>

#define PI 3.14159 // Defining PI as a constant

int main() {
    float radius;       // Variable to store the radius
    float area;         // Variable to store the area
    float circumference; // Variable to store the circumference

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    // Read the radius input from the user
    scanf("%f", &radius);

    // Calculate the area using the formula: Area = PI * radius * radius
    area = PI * radius * radius;

    // Calculate the circumference using the formula: Circumference = 2 * PI * radius
    circumference = 2 * PI * radius;

    // Print the calculated area and circumference
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0; // Indicate successful program execution
}