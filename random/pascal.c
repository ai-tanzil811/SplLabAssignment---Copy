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
        for (int col = 1; col <= row; col++)
        {
            
            printf("%d",col);
        }
        for (int col = row-1; col >=1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }

    return 0;
}
    // for (int col = 2; col <= row; col++)
    // {
    //     printf("* ");
    // }
