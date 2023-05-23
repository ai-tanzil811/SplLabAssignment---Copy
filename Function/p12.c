//Ashraful ISlam Tanzil 0112230028
#include<stdio.h>
int tanzil(int,int);
int main()
{
    int input1,input2;
    scanf("%d %d",&input1,&input2);
    tanzil(input1,input2);  
    printf("Value in main:%d\n", tanzil(input1,input2));
    return 0;

}
int tanzil(int a,int b )
{
    int temp=a;
    a=b;
    b=temp;
    printf("Value in Function %d %d\n",a,b);  
    return 0;
    
}