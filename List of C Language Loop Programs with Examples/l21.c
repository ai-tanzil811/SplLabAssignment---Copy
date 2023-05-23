// Write C program to find HCF of two numbers
// Ashraful Islam tanzil 0112230028
#include <stdio.h>
#include <math.h>
int main()
{
    int input1, input2, input1, input2, gcd;
    int temp;
   
    scanf("%d %d", &input1, &input2);
    input1=input1;
    input2=input2;
    while (input2 > 0)
    {

        temp = input1 % input2;
        input1 = input2;
        input2 = temp;
        
    }
    gcd = input1;
    printf("hCF = %d\n", gcd);
    return 0;
}