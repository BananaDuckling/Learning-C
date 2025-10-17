/*
Add a loop to the broker.c program of Section 5.2 so that the user can enter more than
one trade and the program will calculate the commission on each. The program should ter-
minate when the user enters 0 as the trade value:

Enter value of trade: 30000
Commission: $166.00
Enter value of trade: 20000
Commission: $144.00
Enter value of trade: 0
*/

#include <stdio.h>

int main(void)
{
    float value = 1, commissionRate;
    while (value)
    {
        printf("Enter value of trade: ");
        scanf("%f", &value);

        if (value < 2500.00f)
        {
            commissionRate = value * 0.017f + 30.00f;
        }
        else if (value < 6250.00f)
        {
            commissionRate = value * 0.0066f + 56.00f;
        }
        else if (value < 20000.00f)
        {
            commissionRate = value * 0.0034f + 76.00f;
        }
        else if (value < 50000.00f)
        {
            commissionRate = value * 0.0022f + 100.00f;
        }
        else if (value < 500000.00f)
        {
            commissionRate = value * 0.0011f + 155.00f;
        }
        else
        {
            commissionRate = value * 0.0009f + 255.00f;
        }
        if (commissionRate < 39.00f)
        {
            commissionRate = 39.00f;
        }
        printf("Commission = $%.2f\n", commissionRate);
    }
    return 0;
}