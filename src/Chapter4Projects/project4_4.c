/*
Write a programthat reads an integer entered by the user and displays it in octal (base 8):
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a number between 0 and 32767: ");
    int num;
    scanf("%d", &num);

    int firstOct, secondOct, thirdOct, fourthOct, fifthOct;
    firstOct = num % 8;
    secondOct = num / 8 % 8;
    thirdOct = num / (8 * 8) % 8;
    fourthOct = num / (8 * 8 * 8) % 8;
    fifthOct = num / (8 * 8 * 8 * 8) % 8;

    printf("In octal, your number is: %d%d%d%d%d",
    fifthOct, fourthOct, thirdOct, secondOct, firstOct);
    return 0;

}