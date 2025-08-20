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

    //Total loan remaining per month
    float first_month = loan * (1 + interest_rate) - monthly_payment;
    float second_month = first_month * (1 + interest_rate) - monthly_payment;
    float third_month = second_month * (1 + interest_rate) - monthly_payment;

    //Output values
    printf("Balance remaining after first payment: $%.2f\n", first_month);
    printf("Balance remaining after second payment: $%.2f\n", second_month);
    printf("Balance remaining after third payment: $%.2f\n", third_month);
    return 0;
}