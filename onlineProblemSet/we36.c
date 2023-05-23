#include<stdio.h>
int main()
{
    int a;
    printf("Input the password: ");
    scanf("%d",&a);
    if(a==1234)
    {
        printf("Correct password\n");
    }
    else
    {
        printf("Incorrect password\n");
    }
    return 0;
}