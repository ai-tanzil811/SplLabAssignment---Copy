#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == x || j == 1 || j == x)
            {
                printf("# ");
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