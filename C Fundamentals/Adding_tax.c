#include <stdio.h>

#define tax 0.05f

int main(void) {
    float amount, amount_taxed, total;
    printf("Write the amount with two decmals: ");
    scanf("%f", &amount); // Change format specifier from %f to %2f
    amount_taxed = (amount * tax);
    printf("With tax added: $%2.f.00",total=amount+amount_taxed);
    return 0;
}
