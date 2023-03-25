#include <stdio.h>
main()
{
int money = 1000;
int process,amount;

printf("Money: %d",money);
printf("\n\n**** TRANSACTIONS ****\n");
printf("1. WITHDRAW MONEY\n");
printf("2. LOAD MONEY\n");
printf("3. MONEY BALANCE QUERY\n");
printf("4. CARD RETURN\n");

while(process != 4){
printf("\nEnter your transaction: ");
scanf("%d",&process);

switch(process){
case 1:
printf("Money : %d\n",money);
printf("Enter the amount you want to withdraw : ");
scanf("%d",&amount);
if(amount>1000){
printf("insufficient balance !!");
scanf("%d",&amount);
}
money -= amount;
printf("your new balance : %d",money);
break;
case 2:
printf("Your Money : %d\n",money);
printf("Enter the amount you want to deposit : ");
scanf("%d",&amount);
money += amount;
printf("your new balance : %d",money);
break;
case 3:
printf("Your Money : %d\n",money);
break;
}
}
printf("Have a nice day...");
}