/*
Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n. For example, if the user enters 100, the program should print the follow-
ing:
4
16
36
64
100
*/

#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter n: ");
    scanf("%d", &input);
    for(int i = 0; i * i <= input; i++)
    {
        if((i * i) % 2 == 0) printf("%d\n", i * i);
    }
    return 0;
}