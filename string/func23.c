#include <stdio.h>
int batman(char x[], char y[]);
int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int z = batman(a, b);
    printf("%d\n", z);
    return 0;
}
int batman(char x[], char y[])
{
    int i, j, found;
    int ub = 0, lb = 0;
    while (x[ub] != '\0')
    {
        ub++;
    }
    while (y[lb] != '\0')
    {
        lb++;
    }
    for (i = 0; i <= ub - lb; i++)
    {
        found = 1;
        for (j = 0; j < lb; j++)
        {
            if (x[i + j] != y[j])
            {
                found = 0;
                break;
            }
        }

        if (found == 1)
            return 1;
    }

    return 0;
}
