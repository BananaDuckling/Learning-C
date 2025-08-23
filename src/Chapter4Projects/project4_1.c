#include <stdio.h>
/* 
Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
*/
int main(void)
{
    printf("Enter a two-digit number: ");
    int firstDigit, secondDigit;
    scanf("%1d%1d", &firstDigit, &secondDigit);

    printf("The reversal is: %d%d\n", secondDigit, firstDigit);
    return 0;
}