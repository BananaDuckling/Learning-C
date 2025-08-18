#include <stdio.h> 
// Write a program taht accepts a date from the user in the form of 
// mm/dd/yyyy and then plays it in the form yyyymmdd
// Input: 2/17/2011
// Output: You entered the date 20110217


int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    int day, month, year;
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %.4d%.2d%.2d\n", year,month,day);
    return 0;
}