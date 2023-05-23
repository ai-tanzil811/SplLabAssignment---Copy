#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Input a string and get number of charcters, words and lines:\n");
    fgets(str, sizeof str, stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            count++;
        }
    }
    printf("Number of Characters = %d\n", strlen(str) - 1);
    printf("Number of words = %d\n", count + 1);
    printf("Number of lines = 1\n");
    return 0;
}