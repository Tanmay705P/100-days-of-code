//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    printf("The GCD of %d and %d is %d.\n", num1, num2, findGCD(num1, num2));

    return 0;
}