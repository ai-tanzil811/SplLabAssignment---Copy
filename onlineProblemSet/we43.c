#include <stdio.h>
int main()
{
    int input, i, j;
    printf("Input number of lines: ");
    scanf("%d", &input);
    int line;
    scanf("%d", &line);
    printf("Number of characters in a line: %d\n",line);
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= input; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}