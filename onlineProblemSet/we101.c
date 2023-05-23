#include<stdio.h>
int main()
{
    float num;
    printf("Input a number: ");
    scanf("%f",&num);
    if(num>=1 && num<=20)
    {
        printf("Range [1,20]");
    }
    else if(num>=21 && num<=40)
    {
        printf("Range [21,40]");
    }
    else if(num>=41 && num<=60)
    {
        printf("Range [41,60]");
    }
    else if(num>=61 && num<=80)
    {
        printf("Range [61,80]");
    }
    else if(num>=81 && num<=100)
    {
        printf("Range [81,100]");
    }
    else
    {
        printf("Out of range");
    }
    return 0;
}