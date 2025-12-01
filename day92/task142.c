//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &students[i].id);
        printf("Student %d Name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Student %d Marks: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    printf("\nDisplaying Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-----------------------\n");
    }

    return 0;
}