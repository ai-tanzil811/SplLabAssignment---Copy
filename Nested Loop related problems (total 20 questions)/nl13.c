#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
           printf("%d",j);
        }
        for(int space=1;space<=a-i;space++)
        {
            printf("_");
        }
        for(int space=1;space<=a-i-1;space++)
        {
            printf("_");
        }
         for(int j=i;j>=1;j--)
        {
           if(j!=a)
           {
                printf("%d",j);
           }

        }

        printf("\n");
    }
}