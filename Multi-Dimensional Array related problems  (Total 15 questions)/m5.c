#include <stdio.h>
#define n 100
int main()
{
    int a;
    scanf("%d", &a);
    int b[n][n];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
            {
                printf("%d ", b[i][j] = 1);
            }

            else
            {
                printf("%d ", b[i][j] = 0);
            }
        }
        printf("\n");
    }
    return 0;
}