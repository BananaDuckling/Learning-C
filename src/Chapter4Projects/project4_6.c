/*
European Article Number (EAN)
13 digit code
Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
Add the first, third, fifth, seventh, ninth, and eleventh digits.
Multiply the first sum by 3 and add it to the second sum.
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.

Input: 869148426000
*/

#include <stdio.h>

int main(void)
{
    printf("Enter the first 12 digits of the EAN: ");

    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);

    int s1, s2, s3, s4, s5;
    s1 = i2 + i4 + i6 + j2 + j4 + j6;
    s2 = i1 + i3 +i5 + j1 + j3+ j5;
    s3 = s1 * 3 + s2 - 1;
    s4 = s3 % 10;
    s5 = 9 - s4;

    printf("Check digit: %1d\n", s5);
    return 0;
}