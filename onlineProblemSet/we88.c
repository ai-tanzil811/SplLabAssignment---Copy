#include <stdio.h>
int main()
{
    printf("Decimal\tASCII\n");
    for (int i = 32; i <= 255; i++)
    {
        printf("%d\t%c\n", i, i);
    }
    return 0;
}