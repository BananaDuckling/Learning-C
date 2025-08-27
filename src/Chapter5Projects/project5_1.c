/*
Input 374
Output "The number 374 has 3 digits"
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int input;

    scanf("%d",&input);
    int digits;
    if (input / 1000 > 0)
    {
        digits = 4;
    }
    else if (input / 100 > 0)
    {
        digits = 3;
    }
    else if (input / 10 > 0)
    {
        digits = 2;
    }
    else digits = 1;
    printf("The number %d has %d digits\n ", input, digits);
    return 0;
}