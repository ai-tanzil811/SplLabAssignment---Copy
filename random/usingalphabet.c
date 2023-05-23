#include<stdio.h>
#include<ctype.h>
int main()
{
    char limit;
    gets(limit);
    limit=toupper(limit);
    for(char i = 'A';i<=limit;i++)
    {
        for(char j=i;j<=limit;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}