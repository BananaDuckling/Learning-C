#include <stdio.h>

/* Write a program that formats product information entered by the user.
A session with the program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
*/

int main(void)
{
    printf("Enter item number: ");
    int itemNum;
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    float unitPrice;
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int month, day, year;
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\t\tUnit\t\t\tPurchase\n\t\t\tPrice\t\t\tDate\n%-4d\t\t\t$%7.2f\t\t%-2d/%-2d/%4d\n", itemNum, unitPrice, month, day, year);
    return 0;
}