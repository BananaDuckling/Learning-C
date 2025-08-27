#include <stdio.h>

int main(void)
{
    int i, j, k;

    //Exercise 1
    i = 2; j = 3;
    k = i * j == 6;
    printf("(1a) %d\n", k);

    i = 5; j = 10; k = 1;
    printf("(1b) %d\n", k > i < j);

    i = 3; j = 2; k = 1;
    printf("(1c) %d\n", i < j == j < k);

    i = 3; j = 4; k = 5;
    printf("(1d) %d\n", i % j + i < k);

    //Exercise 2
    i = 10; j = 5;
    printf("(2a) %d\n", !i < j);

    i = 2; j = 1;
    printf("(2b) %d\n", !!i + !j);

    i = 5; j = 0; k = -5;
    printf("(2c) %d\n", i && j || k);

    i = 1; j = 2; k = 3;
    printf("(2d) %d\n", i < j || k);

    //Exercise 3
    i = 3; j = 4; k = 5;
    printf("(3a)%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    i = 7; j = 8; k = 9;
    printf("(3b)%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    i = 7; j = 8; k = 9;
    printf("(3c)%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    i = 1; j = 1; k = 1;
    printf("(3d)%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    //Exercise 5
    int n;
    n = 0;
    if (n >= 1 <= 10)
    {
        printf("(5)n is between 1 and 10\n");
    }
    //Exercise 6
    n = 5;
    if ( n == 1 - 10)
    { 
	    printf("n is between 1 and 10 \n");
    }
    printf("%d\n", n == 1 - 10);

    //Exercise 7
    i = 17;
    printf("%d\n", i >= 0 ? i : -i);
    i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    //Exercise 8
    return 0;
}