/*
Extend the program in Programming Project 1 to 
handle three-digit numbers.
*/

#include <stdio.h>


int main(void)
{
    printf("Enter a three-digit number: ");
    int firstDigit, secondDigit, thirdDigit;
    scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

    printf("The reversal is: %d%d%d\n", thirdDigit, secondDigit, firstDigit);
    return 0;
}