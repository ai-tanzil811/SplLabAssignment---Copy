#include<stdio.h>
int main()
{
    int a;
    printf("Input an integer: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("Even\n");
    }
    else if(a>0)
    {
        if(a%2==0)
        {
            printf("Positive Even\n");
        }
        else
        {
            printf("Positive Odd\n");
        }
    }
    else
    {
        if(a%2==0)
        {
            printf("Negative Even\n");
        }
        else
        {
            printf("Negative Odd\n");
        }
    }
    return 0;
}