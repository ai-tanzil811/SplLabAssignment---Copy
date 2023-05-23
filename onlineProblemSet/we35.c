#include<stdio.h>
int main()
{
    int a,b;
    printf("Input a pair of numbers :\n");
    printf("Input first number of the pair: ");
    scanf("%d",&a);
    printf("Input second number of the pair: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("The pair is in descending order!\n");
    }
    else
    {
        printf("The pair is in ascending order!\n");
    }
    return 0;
}