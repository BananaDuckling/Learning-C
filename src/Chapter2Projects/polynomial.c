#include <stdio.h>

int main(void)
{
    printf("Enter the value of x: ");
    int x;
    scanf("%d", &x);
    int poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the polynomial is %d", poly);
    return 0;
}