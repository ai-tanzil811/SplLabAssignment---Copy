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
        for (space = row; space <= limit; space++)
        {
            printf(" ");
        }
        for (col1 = 1; col1 <= row; col1++)
        {
            if (col1 == 1 || col1 == row || row == limit)
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