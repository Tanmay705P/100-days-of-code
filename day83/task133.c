//reate an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month currentMonth;

    for (currentMonth = JANUARY; currentMonth <= DECEMBER; currentMonth++) {
        switch (currentMonth) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("Month %d has 31 days.\n", currentMonth);
                break;
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("Month %d has 30 days.\n", currentMonth);
                break;
            case FEBRUARY:
                printf("Month %d has 28 days (assuming a non-leap year).\n", currentMonth);
                break;
            default:
                printf("Invalid month.\n");
                break;
        }
    }

    return 0;
}