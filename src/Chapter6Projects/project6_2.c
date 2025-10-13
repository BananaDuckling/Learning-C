/* Write a program that asks the user to enter two integers, then calculates and displays their
greatest common divisor (GCD):
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, temp;
    printf("Enter two integers (int int): ");
    scanf("%d %d", &num1, &num2);
    while(num2 != 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    printf("The greatest common divisor is: %d", num1);
    return 0;
}