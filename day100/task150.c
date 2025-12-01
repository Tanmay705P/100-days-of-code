//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1 = {"Alice", 30, 1.65};
    struct Person *ptr_p1 = &p1;

    printf("Original Data:\n");
    printf("Name: %s\n", ptr_p1->name);
    printf("Age: %d\n", ptr_p1->age);
    printf("Height: %.2f\n", ptr_p1->height);

    strcpy(ptr_p1->name, "Bob");
    ptr_p1->age = 25;
    ptr_p1->height = 1.80;

    printf("\nModified Data:\n");
    printf("Name: %s\n", ptr_p1->name);
    printf("Age: %d\n", ptr_p1->age);
    printf("Height: %.2f\n", ptr_p1->height);

    return 0;
}