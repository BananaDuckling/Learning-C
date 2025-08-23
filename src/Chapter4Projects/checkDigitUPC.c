/*
Add the first, third, fifth, seventh, ninth, and eleventh digits
Add the second, fourth, sixth, eighth, and tenth
Multiply the first sum by 3 and add it to the second sum
Subtract 1 from the total
Compute the remainder when the adjusted total is divided by 10
Subtract the remainder from 9

*/
#include <stdio.h>

int main(void)
{
    printf("Enter the first (single) digit: ");
    int firstDig;
    scanf("%d", &firstDig);

    printf("Enter the first group of five digits: ");
    int i1, i2, i3, i4, i5;
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter the second group of five digits: ");
    int j1, j2, j3, j4, j5;
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

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