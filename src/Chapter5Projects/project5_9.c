/*
Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:


input: 3/6/08
input: 5/17/07
*/

#include <stdio.h>

int main(void)
{
    printf("Enter two calendar dates (mm/dd/yy): ");

    int day1, month1, year1, day2, month2, year2;

    scanf("%d/%d/%d %d/%d/%d", &day1, &month1, &year1, &day2, &month2, &year2);
    if (year1 == year2)
    {
        if (month1 == month2)
        {
            if (day1 == day2) printf("These are the same day");
            else if (day1 < day2) printf("The date %d/%d/%d is closer\n", day1, month1, year1);
            else printf("The date %d/%d/%d is closer\n", day2, month2, year2);
        }
        else if (month1 < month2) printf("The date %d/%d/%d is earlier\n", day1, month1, year1);
        else printf("The date %d/%d/%d is earlier\n", day2, month2, year2);
    }
    else if (year1 < year2) printf("%d/%d/%d is the closer date", day1, month1, year1);
    else printf("The date %d/%d/%d is closer", day2, month2, year2);
    return 0;
}