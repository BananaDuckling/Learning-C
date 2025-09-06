#include <stdio.h>

int main(void)
{   
    printf("Enter how many squares decided: ");
    int n;

    scanf("%d", &n);

    int i = 1, square;
    while (i <= n)
    {
        printf("%d\t%d\n", i, i * i);
        i++;
    }
    return 0;
}