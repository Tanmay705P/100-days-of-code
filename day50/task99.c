//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[] = "25/04/2024";
    char month_str[4];

    char* months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int month_index;

    sscanf(date + 3, "%02d", &month_index);
    month_index--;

    strncpy(date + 3, months[month_index], 3);
    date[6] = '-';

    printf("%s\n", date);

    return 0;
}
