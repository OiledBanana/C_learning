#include <stdio.h>


int main(void) {
int x,equation;
printf("We are solving this polynomial\n");
printf("Enter x(whole number): ");
scanf("%d",&x);
equation = 3 * (x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
printf("This is the answer: %d",equation);
return 0;
}
