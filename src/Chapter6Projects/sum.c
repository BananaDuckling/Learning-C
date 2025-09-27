/* 
Enter a string of numbers 
input 8 23 71 5 0
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a string of integers\n");
    int sum = 0, input = 1;
    while (input != 0)
    {
        printf("Enter digits: ");
        scanf("%d", &input);
        printf("Sum: %d\n", sum += input);
    }
    printf("Exited\n");
    return 0;
}