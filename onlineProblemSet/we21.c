#include<stdio.h>
int main()
{
    int a;
    printf("Input an integer: ");
    scanf("%d",&a);
    if(a>=0 && a<=20)
    {
        printf("Range [0, 20]\n");
    }
    else if(a>=21 && a<=40)
    {
        printf("Range [21, 40]\n");
    }
    else if(a>=41 && a<=60)
    {
        printf("Range [41, 60]\n");
    }
    else if(a>=61 && a<=80)
    {
        printf("Range [61, 80]\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}