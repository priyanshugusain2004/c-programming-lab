#include <stdio.h>

int main()
{
    char name[50];
    int accountNo;
    double balance, deposit, withdrawal, finalBalance;
    int validWithdrawal;

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Current Balance: ");
    scanf("%lf", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%lf", &deposit);

    printf("Enter Withdrawal Amount: ");
    scanf("%lf", &withdrawal);

    if (deposit < 0 || withdrawal < 0)
        validWithdrawal = 0;
    else
        validWithdrawal = withdrawal <= balance && balance - withdrawal >= 1000;

    finalBalance = balance;

    if (deposit >= 0)
        finalBalance += deposit;

    if (validWithdrawal)
        finalBalance -= withdrawal;

    printf("\nAccount Holder : %s\n", name);
    printf("Account Number : %d\n", accountNo);
    printf("Opening Balance: %.2f\n", balance);
    printf("Deposit        : %.2f\n", deposit);
    printf("Withdrawal     : %.2f\n", withdrawal);
    printf("--------------------------------\n");
    printf("Final Balance  : %.2f\n", finalBalance);

    if (validWithdrawal)
        printf("Transaction    : SUCCESS\n");
    else
    {
        printf("Transaction    : FAILED\n");
        if (deposit < 0 || withdrawal < 0)
            printf("Reason         : Invalid amount\n");
        else
            printf("Reason         : Minimum balance requirement not satisfied\n");
    }

    return 0;
}
