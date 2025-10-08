//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() {
    int dayNumber;

    // Prompt the user to enter a number
    printf("Enter a number (1-7) to determine the day of the week: ");
    scanf("%d", &dayNumber);

    // Use a switch statement to display the corresponding day
    switch (dayNumber) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}