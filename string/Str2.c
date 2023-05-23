// rite a program in C to concatenate two strings without using any library function.
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    char tan[100];
    int c = 0;
    for (int i = 0; str1[i] != 0; i++)
    {
        tan[i] = str1[i];
        c++;
    }
    for (int i = 0; str2[i] != 0; i++)
    {
        tan[c++] = str2[i];
    }
    printf("%s\n", tan);
    return 0;
}