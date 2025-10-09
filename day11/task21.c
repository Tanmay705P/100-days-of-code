//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main() {
    int monthNumber;

    // Prompt the user to enter a month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    printf("Month: ");

    // Use a switch-case statement to determine month name and days
    switch (monthNumber) {
        case 1:
            printf("January, Days: 31\n");
            break;
        case 2:
            printf("February, Days: 28/29\n"); // Leap year consideration for February
            break;
        case 3:
            printf("March, Days: 31\n");
            break;
        case 4:
            printf("April, Days: 30\n");
            break;
        case 5:
            printf("May, Days: 31\n");
            break;
        case 6:
            printf("June, Days: 30\n");
            break;
        case 7:
            printf("July, Days: 31\n");
            break;
        case 8:
            printf("August, Days: 31\n");
            break;
        case 9:
            printf("September, Days: 30\n");
            break;
        case 10:
            printf("October, Days: 31\n");
            break;
        case 11:
            printf("November, Days: 30\n");
            break;
        case 12:
            printf("December, Days: 31\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}