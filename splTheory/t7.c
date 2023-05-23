#include <stdio.h>
int main()
{
    int x, s, n, y = 0, cntr = 0, cntr1 = 0;
    scanf("%d", &n);
    for (x = 1; x <= n; ++x)
    { //(1)
        for (s = 1; s <= n - x; ++s)
        { //(2)
            printf(" ");
            ++cntr;
        }
        while (y != 2 * x - 1)
        { //(3)
            if (cntr <= n - 1)
            { //(4)
                printf("%d ", (x + y) * 2);
                ++cntr;
            }
            else
            { //(5)
                ++cntr1;
                printf("%d ", (x + y - 2 * cntr1) * 2);
            }
            ++y;
        }
        cntr1 = cntr = y = 0;
        printf("\n"); //(6)
    }
    return 0;
}