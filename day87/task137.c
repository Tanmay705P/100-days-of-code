//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void displayMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }
}

int main() {
    enum UserRole currentUser = ADMIN;
    displayMessage(currentUser);

    currentUser = USER;
    displayMessage(currentUser);

    currentUser = GUEST;
    displayMessage(currentUser);

    return 0;
}