//Write C program to reverse a number using while & for loop 
//Ashraful islam Tanzil 0112230028
#include<stdio.h>
int main()
{
 int input,rev=0,reminder;
    scanf("%d",&input);
    int temp=input;
    for (int i=temp;temp!=0;temp++)
    {
        reminder=temp%10;
        rev=rev*10+reminder;
        temp/=10;
        
    }
  
    printf("%d",rev);
    return 0;
}
 /*  while(temp!=0)
    {
        reminder=temp%10;
        rev=rev*10+reminder;
        temp=temp/10;

    } */