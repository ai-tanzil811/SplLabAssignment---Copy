#include <stdio.h>
#include <ctype.h>
int main()
{
    char tan[100];
    gets(tan);
    char input;
    scanf("%c", &input);
    input = toupper(input);
    int count = 0;
    for (int i = 0; tan[i] != '\0'; i++)
    {
        tan[i] = toupper(tan[i]);
    }
    for (int i = 0; tan[i] != '\0'; i++)
    {
        if (tan[i] == input)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}