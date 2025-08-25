/* 
A broker generally charges a flat amount and a certain percentage 
based on the transaction and the amount bracket.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter value of trade: ");
    float value;
    scanf("%f", &value);

    float commissionRate;
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
    return 0;
}