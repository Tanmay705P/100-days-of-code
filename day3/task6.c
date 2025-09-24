#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two integers: ");
    
    scanf("%d %d", &num1, &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = num1;  
    num1 = num2;
    num2 = temp;   

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}