#include<stdio.h>
int main()
{
    int limit;
    scanf("%d",&limit);
    int row;
    int col;
    for(row=1;row<=limit;row++)
    {
        for(col=row;col<=limit;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}