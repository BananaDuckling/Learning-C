/*
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one,
two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
stopping when it reaches 0.
*/

#include <stdio.h>

int main(void)
{
    int inputNum, endCondition, digits;
    printf("Enter an n-length digit: ");
    scanf("%d", &inputNum);
    do
    {
        printf("%d",inputNum % 10);
        inputNum /= 10; // while inputNum / 10 is not 0
    } while (inputNum);

    return 0;
}