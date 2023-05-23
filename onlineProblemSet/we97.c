#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int k=1;
    printf("Input some text:\n");
    fgets(str, sizeof str, stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        if (str[i] == ' ')
        {
            printf("\n -- %d",k);
            k++;
        }
    }
    return 0;
}