#include <stdio.h>
#include <string.h>>
int main()
{
    char tan[100], x;
    int c, i, count, max = 0;
    gets(tan);
    for (c = 0; tan[c] != '\0'; c++)
    {
        count = 0;
        for (i = 0; tan[i] != '\0'; i++)
        {
            if ((tan[c] == tan[i]) || (tan[c] == (tan[i] - 32)) || (tan[c] == (tan[i] + 32)))
                count++;
        }
        if (count == max)
        {
            if (x > tan[c])
                x = tan[c];
        }
        if (count > max)
        {
            max = count;
            x = tan[c];
        }
    }
    if ((x >= 65) && (x <= 90))
    {
        printf("%c (or %c)", x, x + 32);
    }
    else if ((x >= 97) && (x <= 122))
    {
        printf("%c (or %c)", x - 32, x);
    }
    return 0;
}