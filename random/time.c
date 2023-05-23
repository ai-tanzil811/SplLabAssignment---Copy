#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    int row;
    int space;
    int col;
for(row=1;row<=limit;row++)
{
   for(col=1;col<=limit;col++)
   {
    if(row==1||col==row||col==limit-row+1||row==limit)
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