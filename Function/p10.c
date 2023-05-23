//  Function to take two positive numbers x and y as input and calculate x to the power y.
//  Ashraful Islam Tanzil 0112230028
#include<stdio.h>
int voldermot(int a,int b);
int main()
{
  int input1,input2;
  scanf("%d %d",&input1,&input2);
  printf("%d to the power %d is %d\n",input1,input2,voldermot(input1,input2));
  return 0;
}
int voldermot(int a,int b)
{
    int tanzil=1;
    for(int i =1;i<=b;i++)
    {
        tanzil*=a;
    }
    return tanzil;
}