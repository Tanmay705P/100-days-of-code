//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    FILE *fp;
    Employee emp1 = {101, "Alice Smith", 65000.0f};
    Employee emp2 = {102, "Bob Johnson", 72000.0f};
    Employee readEmp;

    fp = fopen("employees.bin", "wb");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fwrite(&emp1, sizeof(Employee), 1, fp);
    fwrite(&emp2, sizeof(Employee), 1, fp);

    fclose(fp);

    fp = fopen("employees.bin", "rb");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Employee Data from Binary File:\n");
    while (fread(&readEmp, sizeof(Employee), 1, fp) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", readEmp.id, readEmp.name, readEmp.salary);
    }

    fclose(fp);

    return 0;
}