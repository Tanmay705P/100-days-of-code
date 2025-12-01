//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person *personPtr;

    personPtr = (struct Person *)malloc(sizeof(struct Person));

    if (personPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(personPtr->name, "Alice Smith");
    personPtr->age = 30;
    personPtr->height = 1.65;

    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f meters\n", personPtr->height);

    free(personPtr);
    personPtr = NULL;

    return 0;
}