#include<stdio.h>

int main()
{

    int salary,hra,da,ta;
    float gross_salary;

    printf("enter the salary : ");
    scanf("%d", & salary);

    printf("enter the hra : ");
    scanf("%d", & hra);

    printf("enter the da : ");
    scanf("%d", & da);

    printf("enter the ta : ");
    scanf("%d", & ta);

    gross_salary = salary+hra+da+ta;

    printf("gross salary : %.2f",gross_salary);

    return 0;
}