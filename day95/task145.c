//Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

struct Student getTopStudent(struct Student s1, struct Student s2) {
    if (s1.marks >= s2.marks) {
        return s1;
    } else {
        return s2;
    }
}

int main() {
    struct Student studentA, studentB, topStudent;

    strcpy(studentA.name, "Alice");
    studentA.rollNumber = 101;
    studentA.marks = 85.5;

    strcpy(studentB.name, "Bob");
    studentB.rollNumber = 102;
    studentB.marks = 92.0;

    topStudent = getTopStudent(studentA, studentB);

    printf("Top Student Details:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.rollNumber);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}