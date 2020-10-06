#include<function.h>

int main(void) {
    int choice;
    int deposit_amount=0;
    int withdraw_amount=0;
		int dep_amount=0;
    int with_amount=0;
     while(1)
    {
    printf("Please Enter Your Choice\n");
    printf("1.Check Your Balance \n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Close_Transaction\n");
    scanf("%d",&choice);

   
    switch(choice)
    {
        case 1:CheckBalance();
               break;
        case 2: printf("Please enter your amount: \n");
    						scanf("%d",&deposit_amount);
								dep_amount=Deposit(deposit_amount);
								printf("Your account balance \n");
    						printf("%d",amount);
                             break;
        case 3: printf("Please enter your withdraw amount\n");
    						scanf("%d",&withdraw_amount);
								with_amount=Withdraw();
								printf("Your account balance \n");
    						printf("%d",amount);
                            break;
        case 4: printf("Thank you for your transaction");
                        exit(0);
        default:printf("Please Enter Correct Choice \n");
                break;
    }
         
  }
