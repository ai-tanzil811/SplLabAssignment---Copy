#include<stdio.h>
int  main()
{
    int input;
    scanf("%d",&input);
    int i;
    int sum=0;
    int count=0;
    while(input>0)
    {
        sum+=input;
        count++;
        scanf("%d",&input);
    }
    printf("Average marks in Mathematics: %.2f\n",(float)sum/count);
    return 0;
}