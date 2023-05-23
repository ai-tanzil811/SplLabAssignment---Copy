// WAP that will determine whether an integer is palindrome number or not.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int digit;
    int rev=0;
    int temp=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}