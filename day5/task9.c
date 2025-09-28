//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    // Convert rate to decimal for calculation (e.g., 5% becomes 0.05)
    float decimal_rate = rate / 100; 
    compound_interest = principal * (pow((1 + decimal_rate), time)) - principal;

    // Display the results
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}