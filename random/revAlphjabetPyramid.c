#include<stdio.h>
#include<ctype.h>
int main()
{
    char limit;
    scanf("%c",&limit);
    limit=toupper(limit);
    for(char i = 'A';i<=limit;i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}