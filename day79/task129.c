//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int num;
    long long sum = 0;
    int count = 0;
    double average;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening file numbers.txt\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum: %lld\n", sum);
        printf("Average: %.2lf\n", average);
    } else {
        printf("No numbers found in the file.\n");
    }

    return 0;
} 