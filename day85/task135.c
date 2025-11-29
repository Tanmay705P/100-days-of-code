//Assign explicit values starting from 10 and print them.
#include <stdio.h>

int main() {
    enum Values {
        ValueA = 10,
        ValueB,
        ValueC,
        ValueD
    };

    printf("ValueA: %d\n", ValueA);
    printf("ValueB: %d\n", ValueB);
    printf("ValueC: %d\n", ValueC);
    printf("ValueD: %d\n", ValueD);

    return 0;
}
