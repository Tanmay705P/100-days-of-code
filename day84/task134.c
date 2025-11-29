//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void print_status_message(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
    }
}

int main() {
    Status status1 = SUCCESS;
    Status status2 = FAILURE;
    Status status3 = TIMEOUT;

    print_status_message(status1);
    print_status_message(status2);
    print_status_message(status3);

    return 0;
}
