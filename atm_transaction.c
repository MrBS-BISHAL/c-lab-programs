#include <stdio.h>
#include <conio.h>
void main()
{
     int card_number, password, choice, withdraw, deposit;
     float amount = 3000.00, new_amount = 0;
     printf("Enter the card number: ");
     scanf("%d", &card_number);
     printf("Enter the Password: ");
     scanf(" %d", &password);
     printf("\n\n");
     printf("\n\t***********************************");
     printf("\n\t*           MENU                  *");
     printf("\n\t*     1. Check Balance            *");
     printf("\n\t*     2. Withdraw                 *");
     printf("\n\t*     3. Deposit                  *");
     printf("\n\t*     4. Exit                     *");
     printf("\n\t*                                 *");
     printf("\n\t***********************************");
     printf("\n\n");
     printf("Enter your choice: ");
     scanf("%d", &choice);

     if (choice == 1)
       {
      printf("Current balance on your account: %f\n", amount);
       }
     else if (choice == 2)
      {
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &withdraw);

    if (withdraw > amount)
      {
        printf("You don't have sufficient balance");
      }
    else
      {
        new_amount = amount - withdraw;
        printf("Current balance on your account: %f\n", new_amount);
      }
}

else if (choice == 3)
{
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &deposit);
    amount = amount + deposit;
    printf("Current balance on your account: %.2f\n", amount);
}
else if (choice == 4)
{
    printf("Thank you for using our service\n\n");
}
    getch();
}