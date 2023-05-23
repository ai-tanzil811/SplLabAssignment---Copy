#include<stdio.h>
int main()
{
    int limit;
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int j=1;j<=limit;j++)
        {
          if(i==j||j==limit-i+1)
          {
            printf("*");
          }
          else
          {
            printf("_");
          }
        }
        printf("\n");
    }
    return 0;
}