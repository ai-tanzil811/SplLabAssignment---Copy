#include<stdio.h>
int main()
{
    int limit;
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int j=i;j<=limit;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}