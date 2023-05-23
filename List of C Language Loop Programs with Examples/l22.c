// Write C program to find LCM of two numbers
// Ashraful Islam tanzil 0112230028
#include <stdio.h>
#include <math.h>
int main()
{
    int input1, input2, input1, input2, gcd, lcm;
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
    lcm = (input1 * input2) / gcd;
    printf("LCM = %d\n", lcm);
    return 0;
}