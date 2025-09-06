/*
In one state, single residents are subject to the following income tax:
Income
Not over $750
$750–$2,250
$2,250–$3,750
$3,750–$5,250
$5,250–$7,000
Over $7,000
Amount of tax
1% of income
$7.50
plus 2% of amount over $750
$37.50 plus 3% of amount over $2,250
$82.50 plus 4% of amount over $3,750
$142.50 plus 5% of amount over $5,250
$230.00 plus 6% of amount over $7,000
Write a program that asks the user to enter the amount of taxable income, then displays the
tax due.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter the income amount: ");
    float income, tax;
    scanf("%f", &income);
    if (!(income > 750)) tax = income * 0.01;
    else if (!(income > 2250)) tax = 7.5f + (income - 750.0f) * 0.02;
    else if (!(income > 3750)) tax = 37.5f + (income - 2250.0f) * 0.03;
    else if (!(income > 5250)) tax = 82.5f + (income - 3750.0f) * 0.04;
    else if (!(income > 7000)) tax = 142.5f + (income - 5250.0f) * 0.05;
    else tax = 230.0f + (income - 7000.0f) * 0.06;

    printf("Your income tax is: %.2f", tax);

    return 0;
}