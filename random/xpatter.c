#include<stdio.h>
int main()
{
int limit;
scanf("%d",&limit);
for(int row=1;row<=limit;row++)
{
    for(int col=1 ;col<=limit;col++)
    {
        if(row==col|| col==(limit-row-1)+2)
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