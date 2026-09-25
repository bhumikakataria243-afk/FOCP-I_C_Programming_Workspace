#include<stdio.h>
int main(){
    int age;
    printf("entre the age of the user :");
    scanf("%d",&age);
    float height;
    printf("entre height in meter :");
    scanf("%f",&height);
    char grade;
    printf("entre your grade :");
    scanf(" %c",&grade);
    printf("\n----------------------\n");
    printf("the age of user is %d\n",age);
    printf("height of user in meter is %f\n",height);
    printf("grade of the user is %c", grade);
    printf("\n----------------------\n");
    return 0;
}