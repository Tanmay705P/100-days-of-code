//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student1;

    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';

    printf("Enter student's roll number: ");
    scanf("%d", &student1.roll_no);

    printf("Enter student's marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_no);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}