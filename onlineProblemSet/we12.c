#include <stdio.h>
int main()
{
    char id[10];
    int hours;
    float salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s",&id);
    printf("Input the working hrs: ");
    scanf("%d",&hours);
    printf("Salary amount/hr: ");
    scanf("%f",&salary);
    float sum = hours*salary;
    printf("Employees ID = %s\n",id);
    printf("Salary = U$ %.2f\n",sum);
    return 0;
}