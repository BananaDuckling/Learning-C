/* Write a program that finds the largest in a series of numbers entered by the user. The pro-
gram must prompt the user to enter numbers one by one. When the user enters 0 or a nega-
tive number, the program must display the largest nonnegative number entered:
*/

#include <stdio.h>

int main(void)
{
    float input;
    float largeNum = 0.0f;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%f", &input);
        if (input <= 0)
        {
            printf("The largest number: %3f", largeNum);
            break;
        } 
        else if (input > largeNum) 
            largeNum = input;
    }
    return 0;
}