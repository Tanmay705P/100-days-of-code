#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    // Prompt the user to enter the length
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Prompt the user to enter the breadth
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the area
    area = length * breadth;

    // Calculate the perimeter
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}