/*
Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:


input: 3/6/08
input: 5/17/07
*/

#include <stdio.h>

int main(void)
{
    int day, month, year, earlyDay = 0, earlyMonth, earlyYear;
    printf("Enter a day (mm/dd/yy): ");
    scanf("%d/%d/%d", &earlyMonth, &earlyDay, &earlyYear);
    while(1)
    {
        printf("Enter a day (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        if (month + day + year == 0) 
            break;
        else if( (year < earlyYear) || ((year == earlyYear) && (month < earlyMonth)) || 
        ((year == earlyYear) && (month < earlyMonth) && (day < earlyDay)))
        {
            printf("The new date is earlier.\n");
            earlyDay = day;
            earlyMonth = month;
            earlyYear = year;
        }
    }
    printf("%d / %d / %d is the earliest day.\n", earlyMonth, earlyDay, earlyYear);
    return 0;
}