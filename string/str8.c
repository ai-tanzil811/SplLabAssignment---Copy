#include <stdio.h>
int main()
{
    char tan[100];
    gets(tan);
    int count = 0,temp;
    for (int i = 0; tan[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (tan[i] < tan[j])
            {
                temp = tan[i];
                tan[i] = tan[j];
                tan[j] = temp;
            }
        }
    }
    printf("%s\n", tan);
    return 0;
}