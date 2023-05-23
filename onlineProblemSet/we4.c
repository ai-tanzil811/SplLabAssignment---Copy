#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define n 100
char revrse(char a [n],char b[n]);
int main()
{
    char a[n];
    fgets(a,sizeof(a),stdin);
    int b[n];
    printf("The reverse of %s is %s\n ",a,strrev(a));
    return 0;
}
char revrse(char a [n],char b[n])
{
    int i,j;
    for(i=0,j=strlen(a)-1;i<strlen(a);i++,j--)
    {
        b[i]=a[j];
    }
    b[i]='\0';
}
