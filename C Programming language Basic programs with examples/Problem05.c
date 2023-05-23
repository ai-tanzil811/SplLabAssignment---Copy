//C Program to perform all arithmetic operations
// Ashraful islam tanzil 0112230028
#include<stdio.h>
int main()
{
    int Input1,Input2,add,sub,mul,mod;
    float div;
    scanf("%d%d",&Input1,&Input2);
    add=Input1+Input2;
    sub=Input1-Input2;
    mul=Input1*Input2;
    div=(float)Input1/Input2;
    mod=Input1%Input2;
    printf("Addition = %d\n",add);
    printf("Substraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Divison = %f\n",div);
    printf("Modulus = %d\n",mod);
    return 0;
}