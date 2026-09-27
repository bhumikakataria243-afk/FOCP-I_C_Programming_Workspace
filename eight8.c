#include <stdio.h>
int main()
{
    int basic_salary;
    printf("entre the basic salary of user:");
    scanf("%d", &basic_salary);
    int allowance;
    printf("entre the allowance :");
    scanf("%d", &allowance);
    int bonus;
    printf("entre the bonus value :");
    scanf("%d", &bonus);
    float final_salary = basic_salary + allowance + bonus;
    printf("the final salary is %.2f", final_salary);
    return 0;
}