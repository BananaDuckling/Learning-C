#include <stdio.h>
#define TAXES 1.05f

int main(void)
{
    printf("Enter the amount of dollars and cents: ");
    
    float untaxedMoney;

    scanf("%f", &untaxedMoney);

    printf("Your total cost is %.2f", untaxedMoney * TAXES);
    
    return 0;
}