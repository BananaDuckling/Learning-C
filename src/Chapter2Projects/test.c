#include <stdio.h>

#define FREEZING_TEMP 32.0f
#define CONVERSION_SCALAR (5.0f / 9.0f)

int main() 
{
    float fahrenheit, celsius;

    printf("Enter the degrees in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - FREEZING_TEMP) * CONVERSION_SCALAR;
    printf("The celsius equivalent is %.2f C.\n", celsius);
    return 0;
}