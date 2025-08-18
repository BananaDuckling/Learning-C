#include <stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;

    int num;
    char character;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    scanf("%d", &num);

    scanf("%c", &character);
    printf("%c", character);
    return 0;
}