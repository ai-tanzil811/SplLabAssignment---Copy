#include <stdio.h>
int main()
{
    printf("Number\tSquare\tCube\n");
    printf("=========================\n");
    for (int i = 0; i <= 20; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}