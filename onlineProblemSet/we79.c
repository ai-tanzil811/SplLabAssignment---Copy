#include <stdio.h>
int main()
{
    printf("x       x+2     x+4     x+6\n");
    printf("--------------------------------\n");
    for (int i = 1; i <= 13; i += 3)
    {
        printf("%d       %d       %d       %d\n", i, i + 2, i + 4, i + 6);
    }
    return 0;
}