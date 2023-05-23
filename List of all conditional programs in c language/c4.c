// C Program to find the Largest among Three Variables using Nested else if.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int x1, x2, x3;
    scanf("%d%d%d", &x1, &x2, &x3);
    if (x1 >= x2 && x1 >= x3)

        printf("%d\n", x1);

    else
    {
        if (x2 >= x3)
            printf("%d", x2);
        else
            printf("%d", x3);
    }
    return 0;
}