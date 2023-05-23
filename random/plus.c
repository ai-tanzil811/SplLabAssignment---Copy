#include<stdio.h>
int main()
{
int limit;
scanf("%d",&limit);
for(int row=1;row<=limit;row++)
{
    for(int col=1 ;col<=limit;col++)
    {
        if(row==limit/2+1|| col == limit/2+1)
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