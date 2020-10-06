#include<function.h>

void CheckBalance()
{
    
    printf("Your Amount : ");
    printf("%d",amount);
    printf("\n");
    
}

int Deposit(int deposit_amount)
{
    
    amount=amount+deposit_amount;
    return amount;
    
}
int Withdraw(int withdraw_amount)
{
   
    if(amount>=withdraw_amount)
    {
    amount=amount-withdraw_amount;
    return amount;
    }
    else
    {
        printf("You have insuffient balance");
        return 0;
    }
    
}
