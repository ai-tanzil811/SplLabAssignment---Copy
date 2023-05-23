// unction that takes an array of n integer numbers as input and prints them in reverse order.
// Ashraful Islam Tanzil 0112230028
#include<stdio.h>
#define n 100
void tanzil(int input,int arr[n]);
int main()
{
    int size;
    int array[n];
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
   void tanzil(size,array);
   return 0;
}
void tanzil(int input,int arr[n])
{
     for(int i=input-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}