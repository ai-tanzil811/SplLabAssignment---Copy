#include<stdio.h>
int main()
{
    int i=0;
    int j;
    j=0;
    int limit;
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        for(j=0;j<=limit;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}