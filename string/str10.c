#include <stdio.h>
int main()
{
    char tan[100];
    gets(tan);
    int size = 0;
    for (int i = 0; tan[i] != '\0'; i++)
    {
        size++;
    }
    int i, j;
    char rev[100];
    for (i = size - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = tan[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (rev[i] != tan[i])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}