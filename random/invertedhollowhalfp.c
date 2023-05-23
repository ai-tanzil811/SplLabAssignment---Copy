#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    int row;
    int space;
    int col1;
    for (row = 1; row <= limit; row++)
    {
        for (col1 = row; col1 <= limit; col1++)
        {
            if (row==1|| col1==row || col1 == limit )
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