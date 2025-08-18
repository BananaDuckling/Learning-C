#include <stdio.h>

/*Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:

Input: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
Output: 
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
*/

int main(void)
{
    printf("Enter the numbers 1 to 16 in any order: ");
    int num[16], i;
    for (i = 0; i < 16; i++){
        scanf("%d", &num[i]);
    }
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
            num[0], num[1], num[2], num[3],
            num[4], num[5], num[6], num[7],
            num[8], num[9], num[10], num[11],
            num[12], num[13], num[14], num[15]);
    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n",
    num[0] + num[1] + num[2] + num[3], num[4] + num[5] + num[6] + num[7], num[8] + num[9] + num[10] + num[11], num[12] + num[13] + num[14] + num[15]);
     
    return 0;
}