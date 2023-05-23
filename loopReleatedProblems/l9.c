// Write a program (WAP) that will reverse the digits of an input integer.
#include<stdio.h>
int main()
{
    int n;
    int digit;
    scanf("%d", &n);
    int rev=0;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("%d", rev);
    return 0;
}