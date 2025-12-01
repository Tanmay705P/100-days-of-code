//Find and print the student with the highest marks.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];
    int i;

    for (i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    int highestMarks = -1;
    char topperName[50];

    for (i = 0; i < numStudents; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            strcpy(topperName, students[i].name);
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", topperName);
    printf("Marks: %d\n", highestMarks);

    return 0;
}