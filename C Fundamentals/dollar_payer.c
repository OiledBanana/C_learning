#include <stdio.h>


int main(void) {
int amount,twenty_dollar,ten_dollar,five_dollar,one_dollar;
printf("Enter a dollar amount: \n");
scanf("%d",&amount);
twenty_dollar = amount / 20;
int new_amount = amount - (twenty_dollar * 20);
ten_dollar = new_amount / 10;
printf("$20 bills: %d\n",twenty_dollar);
printf("$10 bills: %d\n",ten_dollar);



return 0;
}
