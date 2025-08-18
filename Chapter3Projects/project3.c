#include <stdio.h>
/*Books are identified by ISBN. They contain 13 digits, arranged in 5 groups.
Write a program to break down the digits of ISBN
First group (GSI) is either 978 or 979
The group identifier specifies the language or country origin
The publisher code identifies the publisher 
The item number identify a specific book
The ISBN ends with a check digit
Input: 978-0-393-97950-3 */

int main(void)
{
    printf("Enter ISBN: ");
    int gsi, groupIdent, pubCode, itemNum, checkDig;
    scanf("%d-%d-%d-%d-%d", &gsi, &groupIdent, &pubCode, &itemNum, &checkDig);

    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsi, groupIdent, pubCode, itemNum, checkDig);
    return 0;
}