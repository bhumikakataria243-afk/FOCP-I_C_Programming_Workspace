#include <stdio.h>
int main()
{
    int c;
    printf("entre the value of celsius in integer :");
    scanf("%d", &c);
    float Celsius;
    printf("entre the value of celsius: ");
    scanf("%f", &Celsius);
    float Fahrenheit = (Celsius * 9 / 5) + 32;
    float Fah = (c * 9 / 5) + 32.0;
    printf("the temp in fahreheit is %f\n", Fahrenheit);
    printf("the temp in fahreheit is %.2f\n", Fahrenheit);
    printf("the temp in fahreheit for integer is %f\n", Fah);
    printf("the temp in fahreheit for integer is %.2f", Fah);

    return 0;
}
