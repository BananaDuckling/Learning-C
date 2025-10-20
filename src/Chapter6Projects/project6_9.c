/*
Programming Project 8 in Chapter 2 asked you to write a program that calculates the
remaining balance on a loan after the first, second, and third monthly payments. Modify the
program so that it also asks the user to enter the number of payments and then displays the
balance remaining after each of these payments.
*/


#include <stdio.h>

int main(void)
{
    printf("Enter amount of loan: ");
    float loan;
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    float yearly_interest_rate;
    scanf("%f", &yearly_interest_rate);

    float interest_rate = yearly_interest_rate / 1200;

    printf("Enter monthly payment: ");
    float monthly_payment;
    scanf("%f", &monthly_payment);
    
    int input = 1, month = 0; //default month : 1
    while(input)
    {
        printf("Enter number of payments: ");
        scanf("%d", &input);
        for(int i = 1; i <= input; i++)
        {
            loan = loan * (1 + interest_rate) - monthly_payment;
            printf("Current loan balance after %d months: %.2f\n", ++month, loan);
        }
    }
    return 0;
}