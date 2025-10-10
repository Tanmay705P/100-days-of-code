//Write a program to calculate library fine based on late days as follows: 
#include <stdio.h>

int main() {
    int lateDays;
    double fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &lateDays);

    // Calculate fine based on late days
    if (lateDays <= 0) {
        fine = 0.0; // No fine if returned on time or early
    } else if (lateDays <= 5) {
        fine = lateDays * 2.0; // Example: 2.0 per day for the first 5 days
    } else if (lateDays <= 10) {
        // Example: 5 days * 2.0 + (lateDays - 5) * 5.0 for days 6-10
        fine = (5 * 2.0) + ((lateDays - 5) * 5.0);
    } else {
        // Example: 5 days * 2.0 + 5 days * 5.0 + (lateDays - 10) * 10.0 for days beyond 10
        fine = (5 * 2.0) + (5 * 5.0) + ((lateDays - 10) * 10.0);
    }

    // Display the calculated fine
    printf("The fine for returning the book %d days late is: %.2lf\n", lateDays, fine);

    return 0;
}