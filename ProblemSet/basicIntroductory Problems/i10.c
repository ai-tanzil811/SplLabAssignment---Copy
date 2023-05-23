#include<stdio.h>
int main()
{
    long int a = 10;
    long long int b = 20;
    long double c = 30.5;
    short int d = 40;
    printf("The long int value: %ld", a);
    printf("The long long int value: %lld", b);
    printf("The long double value: %Lf", c);
    printf("The short int value: %hd", d);
    return 0;
}