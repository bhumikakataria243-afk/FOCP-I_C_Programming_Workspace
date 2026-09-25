#include <stdio.h>
int main()
{
    int a, b;
    printf("entre the value of a ");
    scanf("%d", &a);
    printf("entre the value of b :");
    scanf("%d", &b);
    printf("before swapping\n");
    printf("a= %d\n  b= %d\n", a, b);

    // now b=a and a=b
    int c = a;//c=a
    a = b;// a=b
    b = c;//b=a=c
    printf("after swapping\n");
    printf("a = %d\n  b = %d\n", a, b);
    return 0;
}