/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:

Enter a fraction: 6/12
In lowest terms: 1/2
*/

#include <stdio.h>

int main(void)
{
    int numer, denom;

    printf("Enter a fraction (#/#): ");
    scanf("%d/%d", &numer, &denom);

    //Finding the GCD
    int m = numer, n = denom, temp, GCD;
    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    GCD = m;
    printf("The lowest reduction fraction is %d / %d.\n", numer / GCD, denom / GCD);
    return 0;
}