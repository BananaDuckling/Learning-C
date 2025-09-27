/*
Print a table of squares using a for loop
*/

#include <stdio.h>

int main(void)
{
    printf("Enter the number of squares: ");
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        printf("%d\t%d\n", i, i * i);
    }
    return 0;
}