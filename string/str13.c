#include <stdio.h>
#include <string.h>
int c, i, j;
int main()
{
    char tan[100];
    gets(tan);
    for (c = 0; tan[c] != '\0'; c++)
    {
        for (i = c + 1; tan[i] != '\0'; i++)
        {
            if (tan[c] == tan[i])
            {
                for (j = i; tan[j] != '\0'; j++)
                {
                    tan[j] = tan[j + 1];
                }
            }
        }
    }
    printf("%s", tan);
    return 0;
}