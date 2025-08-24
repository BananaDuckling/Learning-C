#include <stdio.h>
/* 
Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
*/
int main(void)
{
    printf("Enter a two-digit number: ");
    int digit;
    scanf("%2d", &digit);

    printf("The reversal is: %d%d\n", digit % 10, digit / 10);
    return 0;
}