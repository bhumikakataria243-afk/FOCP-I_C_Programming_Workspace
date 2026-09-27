#include<stdio.h>
int main(){
    int a , b;
    printf("entre the value of a");
    scanf("%d",&a);
    printf("entre the value of b");
    scanf("%d",&b);
 float quotient =a/b;
 printf("the value of quotient is%.2f\n",quotient);
 int remainder=a%b;
printf("the value of remainder is %d",remainder);
return 0;
}