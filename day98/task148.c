//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Person {
    char name[50];
    int age;
    float height;
};

bool arePersonsIdentical(struct Person p1, struct Person p2) {
    if (strcmp(p1.name, p2.name) != 0) {
        return false;
    }
    if (p1.age != p2.age) {
        return false;
    }
    if (p1.height != p2.height) {
        return false;
    }
    return true;
}

int main() {
    struct Person person1 = {"Alice", 30, 1.65};
    struct Person person2 = {"Alice", 30, 1.65};
    struct Person person3 = {"Bob", 25, 1.70};

    if (arePersonsIdentical(person1, person2)) {
        printf("person1 and person2 are identical.\n");
    } else {
        printf("person1 and person2 are not identical.\n");
    }

    if (arePersonsIdentical(person1, person3)) {
        printf("person1 and person3 are identical.\n");
    } else {
        printf("person1 and person3 are not identical.\n");
    }

    return 0;
}