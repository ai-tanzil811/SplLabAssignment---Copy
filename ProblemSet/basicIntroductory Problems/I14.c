// Program that will define a global and a local variable with the same name but with different

// values, and then do the following steps in order-
// A. Print the value of the variable before defining the local variable

// B. Print the value of the variable after defining the local variable
// C. Explicitly print the value of the variable as global
#include<stdio.h>
int a=20;
int main()
{
    printf("global %d",a);
    int a=10;
    printf("local %d",a);
    printf("global %d", ::a);
    return 0;
}