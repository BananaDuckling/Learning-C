/*
Write a program that finds the largest and smallest of four integers entered by the user:

Input: 21 43 10 25

*/
#include <stdio.h>

int main(void)
{
    printf("Enter four integers: ");
    int i1, i2, i3, i4;
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
    int small, large;
    if (i1 > i2) 
    {
        large = i1;
        small = i2;
    }
    else 
    {
        large = i2;
        small = i1;
    }
    if (i3 > large) large = i3;
    else if (i3 < small) small = i3;
    if (i4 > large) large = i4;
    else if (i4 < small) small = i4;
    printf("The largest integer is: %d.\nThe smallest integer is: %d", large, small);
    return 0;
}