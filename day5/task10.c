//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    // Formula: CI = P * ( (1 + R/100)^T - 1 )
    // Where P = principal, R = rate, T = time
    compound_interest = principal * (pow(1 + (rate / 100), time) - 1);

    // Display the results
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}