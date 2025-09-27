#include <stdio.h>

int main(void)
{
    printf("Command Menu\n");
    printf("0 = Clear, 1 = Debit, 2 = Credit, 3 = Balance, 4 = Exit\n");
    int cmd;
    float balance = 0.0f, debit, credit;
    while(1)
    {
        printf("Enter a command:");
        scanf("%d", &cmd);
        switch(cmd)
        {
            case 0:
                {
                    balance = 0.0f;
                    printf("Your balance is now $0.\n");
                    break;
                }
            case 1: 
                {
                    printf("Enter the amount of debit: ");
                    scanf("%f", &debit);
                    balance -= debit;
                    break;
                }
            case 2:
                {
                    printf("Enter the amount of credit: ");
                    scanf("%f", &credit);
                    balance += credit;
                    break;
                }
            case 3:
                {
                    printf("Your balance is: $%6.2f\n", balance);
                    break;
                }
            case 4: return 0;
        }
    }
}