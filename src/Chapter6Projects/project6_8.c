/*
Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins:
Enter number of days in month: 31
Enter starting day of the week (1=Sun, 7=Sat): 3
1 2 3 4 5
6 7 8 9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31

*/

#include <stdio.h>

int main(void)
{
    int startDate, numDays;
    printf("Enter the number of days in month: ");
    scanf("%d", &numDays);
    printf("Enter the start day (1 = Sun, 7 = Sat): ");
    scanf("%d", &startDate);

    printf("Mo\tTu\tWe\tTh\tFr\tSa\tSu\n");
    for(int i = 1; i < startDate; i++)
        printf("\t");
    
    for(int n = 1, i = startDate; n <= numDays; n++, i++)
    {
        printf("%d", n);
        if(i % 7 == 0) 
            printf("\n");
        else 
            printf("\t");
    }
    return 0;
}