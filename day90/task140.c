//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// Define the Gender enumeration
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define the Person structure using the Gender enumeration
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // Initialize a Person struct
    struct Person person1;
    // The following strings are manually copied as direct string assignment isn't standard C without strcpy()
    char name_val[] = "Alice";
    for(int i = 0; i < sizeof(name_val); ++i) {
      person1.name[i] = name_val[i];
    }
    person1.age = 30;
    person1.gender = FEMALE;

    // Print the person's gender based on the enum value
    printf("Person's gender is: ");
    switch (person1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}
