#include <stdio.h>
/* Write a program that prompts the user to enter a telephone number in the form
(xxx) xxx-xxxx and then displays the number in form xxx.xxx.xxx:

Input: (404) 817-6900
Output: 404.817.6900
*/

int main(void)
{
    printf("Enter phone number (xxx) xxx-xxxx: ");

    int areaCode, middleNum, lastNum;

    scanf("(%d) %d-%d", &areaCode, &middleNum, &lastNum);

    printf("You entered %d.%d.%d\n", areaCode, middleNum, lastNum);
    return 0;
}