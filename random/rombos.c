#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    for (int row = 1; row <= limit; row++)
    {
        for (int space = row; space <= limit; space++)
        {
            printf(" ");
        }
        for (int col = 1; col <= limit; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}