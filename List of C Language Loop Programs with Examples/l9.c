//Write C program to find the sum of first and last digit of any number
//Asshraful ISlam tanzil 0112230028
#include<stdio.h>
#include<math.h>
int main()
{
    int input,digit,divide,first,last,add;
    scanf("%d",&input);
    digit=log10(input);
    divide=pow(10,digit);
    first=input/divide;
    last=input%10;
    add=first+last;
    printf("%d",add);
    return 0;
}