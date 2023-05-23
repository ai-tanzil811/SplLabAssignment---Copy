// Write a program in C to find the length of a string without using any library function
// aSHRAFUL isLAM tANZIL 0112230028
#include <stdio.h>
#define n 100
int main()
{
    char tan[n];
    int c = 0;
    gets(tan);
    for (int i = 0; tan[i] != '\0'; i++)
    {
        c++;
    }
    printf("%d", c);
}