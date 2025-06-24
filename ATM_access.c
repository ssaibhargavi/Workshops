// Accessing ATM account to withdraw money which has 5000rupees balance in it with a valid PIN 

#include <stdio.h>
int main()
{
    int pin=1234,entered_pin;
    printf("Enter pin:");
    scanf("%d",&entered_pin);
    int balance=5000;
    int amount;
    if(entered_pin==pin)
    {
        printf("PIN verified \nYour balance is %d",balance);
        printf("\nEnter the amount to withdraw:");
        scanf("%d",&amount);
        if(amount<=balance)
        {
            printf("%d withdrawn successfully",amount);
            printf("\nRemaining balance is %d",(balance-amount));
        }
        else
        {
            printf("Insufficient balance");
        }
    }
    else
    {
        printf("Invalid PIN");
    }
    return 0;
}
