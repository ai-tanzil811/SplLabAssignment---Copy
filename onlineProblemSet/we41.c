#include <stdio.h>
int main()
{
    int input, i, j;
    printf("Input number of lines: ");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        printf("%d %d %d\n", i, i + 1, i + 3);
        printf("\n");
    }
    return 0;
}