#include <stdio.h>


int main(void)
{
    printf("Enter a dollar amount: ");

    int dollar;

    scanf("%d", &dollar);

    int bill_20, bill_10, bill_5, bill_1;

    //Finding lowest number of bills
    bill_20 = dollar / 20;
    bill_10 = (dollar - 20 * bill_20) / 10;
    bill_5 =  (dollar - 20 * bill_20 - 10 * bill_10) / 5;
    bill_1 =  dollar - 20 * bill_20 - 10 * bill_10 - 5 * bill_5;

    //Output answer
    printf("$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", bill_1);

    return 0;
}