#include <stdio.h>
#include <string.h>
int main()
{
    char tan[100];
    gets(tan);
    int sum = 0;
    for (int i = 0; tan[i] != '\0'; i++)
    {
        if (tan[i] >= '0' && tan[i] <= '9')
            sum += (tan[i] - '0');
    }
    printf("%d\n", sum);
    return 0;
}