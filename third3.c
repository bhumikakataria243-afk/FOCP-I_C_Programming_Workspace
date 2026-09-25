#include <stdio.h>
int main()
{

    int quan;
    printf("entre the number of items purchased: ");
    scanf("%d", &quan);
    float price;
    printf("entre the price of product:");
    scanf("%f", &price);
    float total_bill = quan * price;
    printf("total bill is %.2f", total_bill);
    printf("\n");
    printf("\n-------------------\n");
    printf("total bill is %.2f", total_bill);

    return 0;
}