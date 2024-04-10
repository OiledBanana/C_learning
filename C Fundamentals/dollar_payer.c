#include <stdio.h>


int main(void) {
int amount,twenty_dollar,ten_dollar,five_dollar,one_dollar;
printf("Enter a dollar amount: \n");
scanf("%d",&amount);
twenty_dollar = amount / 20;
amount %= 20;
ten_dollar = amount / 10;
amount %= 10;
five_dollar = amount / 5;
amount %= 5;
one_dollar = amount;

printf("$20 bills: %d\n",twenty_dollar);
printf("$10 bills: %d\n",ten_dollar);
printf("$5 bills: %d\n",five_dollar);
printf("$1 bills: %d\n", one_dollar);




return 0;
}
