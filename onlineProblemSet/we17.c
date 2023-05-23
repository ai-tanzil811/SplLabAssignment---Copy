#include<stdio.h>
int main()
{
    int amount;
    printf("Input the amount: ");
    scanf("%d",&amount);
    int a[100]={100,50,20,10,5,2,1};
    int i;
   int b[100];
    for(i=0;i<7;i++)
    {
        b[i]=amount/a[i];
        amount=amount%a[i];
    }
    for(i=0;i<7;i++)
    {
        printf("%d Note(s) of %d.00\n",b[i],a[i]);
    }
    return 0;
}n