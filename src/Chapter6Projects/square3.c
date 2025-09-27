/*
This program prints the odd difference between squares


*/


#include <stdio.h>

int main(void)
{
    printf("Enter the number of squares: ");
    int n, square, i, odd;
    scanf("%d", &n);
    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2)
    {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    return 0;
}