#include <stdio.h>
int tanzil(char a[]);
int main()
{
    char a[100];
    gets(a);
    int z = tanzil(a);
    printf("%d", z);
    return 0;
}
int tanzil(char a[])
{
    int c = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}