#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    for (int row = 1; row <= limit; row++)
    {
        for (int space = 1; space <= row + 1; space++)
        {
            printf(" ");
        }
        for (int col = 1; col <= limit; col++)
        {
            if (col == 1 || col == limit || row == 1 || row == limit)
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