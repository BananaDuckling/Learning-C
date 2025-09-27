/*
Calculates the number of digits in an integer

Input: Enter a nonnegative integer: 60
The number has 2 digit(s)
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a nonnegative integer: ");
    int input, i = 0;
    scanf("%d", &input);

    do 
    {
        input /= 10;
        i++;
    } while (input > 0);
    printf("The number has %d digit(s).\n", i);
    return 0;
}