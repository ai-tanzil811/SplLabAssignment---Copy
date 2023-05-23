#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    for(int i=a;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    scanf("%d %d", &n, &r);
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d", nCr);
    return 0; 
}