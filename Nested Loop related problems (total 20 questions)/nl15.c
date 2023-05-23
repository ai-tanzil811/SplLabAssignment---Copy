#include<stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    for(int i=1;i<=limit;i++)
    {
        for(int j=1;j<=limit;j++)
        {
          if(i==1||i==limit||j==limit-i+1)
          {
            printf("Z ");
          }
          else
          {
            printf("  ");
          }
        }
        printf("\n");
    }
}