#include <stdio.h>

int main() {
    float celsius, fahrenheit; 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); 

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0; 

    // Display the converted temperature in Fahrenheit, rounded to two decimal places
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0; 
}