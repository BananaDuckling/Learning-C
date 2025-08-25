/*
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time,
instead of entering one digit, then five digits, and then another five digits.

Input: 01380015173
*/

#include <stdio.h>

int main(void)
{
    printf("Enter the first 11 digits of a UPC: ");
    int firstDig, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
    &firstDig, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    int stepOne, stepTwo, stepThree, stepFour, stepFive, checkDigit;
    stepOne = firstDig + i2 + i4 + j1 + j3 + j5;
    stepTwo = i1 + i3 + i5 + j2 + j4;
    stepThree = stepOne * 3 + stepTwo;
    stepFour = stepThree - 1;
    stepFive = stepFour % 10;
    checkDigit = 9 - stepFive;

    printf("Your check digit is %d.\n", checkDigit);
    
    return 0;
}