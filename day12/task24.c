//Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>

int main() {
    float units, bill = 0.0;

    // Prompt the user to enter the units consumed
    printf("Enter the units consumed: ");
    scanf("%f", &units);

    // Calculate the electricity bill based on the tiered rates
    if (units <= 0) {
        printf("Please enter a valid number of units consumed.\n");
    } else if (units <= 50) {
        bill = units * 3.50;
    } else if (units <= 150) {
        bill = (50 * 3.50) + ((units - 50) * 4.00);
    } else if (units <= 250) {
        bill = (50 * 3.50) + (100 * 4.00) + ((units - 150) * 5.20);
    } else {
        bill = (50 * 3.50) + (100 * 4.00) + (100 * 5.20) + ((units - 250) * 6.50);
    }

    // Display the calculated electricity bill
    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}