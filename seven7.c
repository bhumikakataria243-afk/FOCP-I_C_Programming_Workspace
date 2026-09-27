#include<stdio.h>
int main(){
    int a ,b ,c ,d , e;
    printf("entre the value of first subject :");
    scanf("%d",&a);
    printf("entre the value of second subject :");
    scanf("%d",&b);
    printf("entre the value of third subject:");
    scanf("%d",&c);
    printf("entre the value of fourth subject :");
    scanf("%d",&d);
    printf("entre the value of fivth subject:");
    scanf("%d",&e);
    int total_marks= a+b+c+d+e;
    printf("entre the total marks is %d\n",total_marks);
    float percentage = (total_marks)/500.0;
    printf("the percenatut of 100 is %.2f%%",percentage);
    return 0;

}