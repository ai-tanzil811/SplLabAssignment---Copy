#include <stdio.h>
int main()
{
    char tan[100];
    gets(tan);
    for (int i = 0; tan[i] != '\0'; i++)
    {
        if (tan[i] >= 97 && tan[i] <= 122)
        {
            tan[i] -= 32;
        }
         if (tan[i] >= 65 && tan[i] <= 90)
        {
            tan[i] += 32;
        }
    }
    printf("%s\n", tan);
    return 0;
}