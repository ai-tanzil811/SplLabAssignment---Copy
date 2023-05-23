#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    char reverse[100];
    int i, j;
    for (i = size - 1, j = 0; i >= 0; i--, j++)
    {
        reverse[j] = str[i];
    }
    
    reverse[j] = '\0';
    printf("%s\n", reverse);
    return 0;
}

    // for(int i =size-1;i>=0;i--)
    // {
    //     for(int j=0;j)
    // }