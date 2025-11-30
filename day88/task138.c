//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Day
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN,
    NUM_DAYS 
};

const char *dayNames[] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

int main()
{
    for (enum Day d = MON; d < NUM_DAYS; d++)
    {
        printf("Enum Name: %s, Integer Value: %d\n", dayNames[d], d);
    }
    return 0;
}