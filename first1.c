#include<stdio.h>
int main (){
char name[20];
printf("entre your name:");
scanf("%19s",name);
char studentid[20];
printf("entre your student id");
scanf("%19s",studentid);
int age ;
printf("entre your age");
scanf("%d",&age);
char grade;
printf("entre your grade");
scanf(" %c",&grade);

printf("\n------------------------\n");
 printf("     STUDENT INFO\n");
 printf("------------------------\n");
printf("the name of student is %s\n",name);
printf("the student id is %s\n",studentid);
printf("the age of student is %d\n",age);
printf("grade is %c",grade);
return 0;

}