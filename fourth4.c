#include <stdio.h>
int main()
{
    int a, b, c;
    printf("entre the value of a");
    scanf("%d", &a);
    printf("entre the value of b");
    scanf("%d", &b);
    printf("entre the value of c");
    scanf("%d", &c);
    float total_average = (a + b + c) / 3.0;
    printf("total average value is %.2f", total_average);
    printf("\n----------------\n");
    printf("total average value is %.2f", total_average);

    return 0;
}