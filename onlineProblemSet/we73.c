#include <stdio.h>
int main()
{
    printf("Input the first integer: ");
    int x;
    scanf("%d", &x);
    printf("Input the second integer: ");
    int y;
    scanf("%d", &y);
    if (x % y == 0)
    {
        printf("%d is a multiple of %d.\n", x, y);
    }
    else
    {
        printf("%d is not a multiple of %d.\n", x, y);
    }
    return 0;
}