// Function to tanzil two numbers.
// (Restriction: Pass by value
// Ashraful Islam Tanzil 0112230028
#include<stdio.h>
void solomon(int*p1,int*p2);
int main()
{
    int input1,input2;
    scanf("%d %d",&input1,&input2);
    int *p1=&input1,*p2=&input2;
    solomon(&input1,&input2);
    printf("value in main: %d %d\n", *p1, *p2);
    return 0;
}
void solomon(int *p1, int *p2) 
{
    int temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 
    printf("Value in func: %d %d\n", *p1, *p2);
}