//Write a C program to print all natural numbers in reverse order
//Ashraful Islam Tanzil 0112230028
#include<stdio.h>
int main()
{
    int inputValue;
    scanf("%d",&inputValue);
    for(int i=inputValue;i>=1;i--)// 0 bastob songkha na
    {
        printf("%d\n",i);
    } 
    return 0;
}