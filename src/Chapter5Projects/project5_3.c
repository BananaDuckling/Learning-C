/*
Modify the broker.c program of Section 5.2 by making both of the following changes:
(a) Ask the user to enter the number of shares and the price per share, instead of the value
of the trade.
(b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Dis-
play the rival’s commission as well as the commission charged by the original broker.

*/

#include <stdio.h>

int main(void)
{
    printf("Enter the number of shares: ");
    int number;
    scanf("%d", &number);

    printf("Enter the value of the shares: ");
    float value;
    scanf("%f", &value);

    float trade = number * value;

    float commissionRate1, commissionRate2;
    if (trade < 2500.00f)
    {
        commissionRate1 = trade * 0.017f + 30.00f;
    }
    else if (trade < 6250.00f)
    {
        commissionRate1 = trade * 0.0066f + 56.00f;
    }
    else if (trade < 20000.00f)
    {
        commissionRate1 = trade * 0.0034f + 76.00f;
    }
    else if (trade < 50000.00f)
    {
        commissionRate1 = trade * 0.0022f + 100.00f;
    }
    else if (trade < 500000.00f)
    {
        commissionRate1 = trade * 0.0011f + 155.00f;
    }
    else
    {
        commissionRate1 = trade * 0.0009f + 255.00f;
    }
    if (commissionRate1 < 39.00f)
    {
        commissionRate1 = 39.00f;
    }


    if (number < 2000)
    {
        commissionRate2 = number * 0.03f + 33.00f;
    }
    else
    {
        commissionRate2 = number * 0.02f + 33.00f;
    }
    printf("Broker 1 = $%.2f\n", commissionRate1);
    printf("Broker 2 = $%.2f\n", commissionRate2);

    return 0;
}