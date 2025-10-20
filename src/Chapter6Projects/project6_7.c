/*
Rearrange the square3.c program so that the for loop initializes i, tests i, and incre-
ments i. Don’t rewrite the program; in particular, don’t use any multiplications.

*/

#include <stdio.h>

int main(void)
{
    printf("Enter the number of squares: ");
    int n, square, i, odd;
    scanf("%d", &n);
    for (square = 1, i = 1, odd = 3; i <= n; odd += 2, ++i)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}