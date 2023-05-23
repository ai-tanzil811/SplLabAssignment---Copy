#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=1;i<=(a/2)+1;i++)
    {
        for(int space=1;space<=(a/2+1)-i;space++)
        {
            printf("_");
        }
        for(int j=1;j<=i;j++)
        {
           printf("*");
        }
        for(int j=1;j<=i-1;j++)
        {
           printf("*");
        }

        printf("\n");
    }
    for(int i=1;i<=a/2;i++)
    {
        for(int space=1;space<=i;space++)
        {
            printf("_");
        }
        for(int j=1;j<=(a/2+1)-i;j++)
        {
           printf("*");
        }
        for(int j=1;j<=(a/2)-i;j++)
        {
           printf("*");
        }

        printf("\n");
    }

}