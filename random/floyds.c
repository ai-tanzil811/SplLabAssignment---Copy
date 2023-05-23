#include <stdio.h>
int main()
{
    int limit;
    int k = 1;
    scanf("%d", &limit);
    for (int row = 1; row <= limit; row++)
    {
        for (int col = 1; col <= row; col++)
        {

            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}