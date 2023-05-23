#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    int i;
    int j;
    int space;
    for (i = 1; i <= limit; i++)
    {
       
        
        for (j = 1; j <= limit; j++)
        {
             if (i==1||i==j&&j<=(limit/2)+1||j==limit-i+1&&j>=(limit/2)+1)
         {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}