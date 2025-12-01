//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date dateOfJoining;
};

void printEmployeeDetails(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Date of Joining: %02d-%02d-%d\n", emp.dateOfJoining.day, emp.dateOfJoining.month, emp.dateOfJoining.year);
}

int main() {
    struct Employee emp1;

    emp1.id = 101;
    strcpy(emp1.name, "John Doe");
    emp1.salary = 55000.00;
    emp1.dateOfJoining.day = 15;
    emp1.dateOfJoining.month = 7;
    emp1.dateOfJoining.year = 2023;

    printf("Employee Details:\n");
    printEmployeeDetails(emp1);

    return 0;
}