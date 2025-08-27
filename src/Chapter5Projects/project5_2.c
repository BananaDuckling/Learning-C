/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:
Input 21:11
Output Equivalent 12-hour time: 9:11 PM
*/
#include <stdio.h>

int main(void)
{
    printf("Enter a 24-hour time: ");
    int hour, minute;

    scanf("%d:%d", &hour, &minute);
    char suffix[2] = "AM";

    if (hour > 11)
    {
        suffix[0] = 'P';
        if (hour > 12)
        {
            hour %= 12;    
        }
    }
    printf("Equivalent 12-hour time: %d:%.2d %2s\n", hour, minute, suffix);
    return 0;
}