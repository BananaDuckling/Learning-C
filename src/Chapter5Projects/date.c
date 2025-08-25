/* 
Program to display the dates similar to legal forms
main issue: how do we know to end in st, nd, rd, or th
Prints a date in legal form

Input: 7/19/14
*/

#include <stdio.h>

int main(void)
{
    int month, day, year;
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Dated this %2d", day);
    switch (day)
    {
        case 1: case 21: case 31:
            printf("st");
            /* Fall through*/
            break;
        case 2: case 22:
            printf("nd");
            /* Fall through*/
            break;
        case 3: case 23:
            printf("rd");
            /*Fall through*/
            break;
        default:
            printf("th");
            break;
    }
    printf(" day of ");
    switch (month)
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    printf(", 20%2d.\n", year);
    return 0;
}
