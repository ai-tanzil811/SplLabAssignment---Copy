#include<stdio.h>
int main()
{
    float num[7],pos=0,neg=0,posSum=0,negSum=0;
    int i;
    printf("Input 7 numbers(int/float):\n");
    for(i=0;i<7;i++)
    {
        scanf("%f",&num[i]);
        if(num[i]>0)
        {
            pos++;
            posSum+=num[i];
        }
        else if(num[i]<0)
        {
            neg++;
            negSum+=num[i];
        }
    }
    printf("\n%.0f Number of positive numbers: Average %.2f\n",pos,posSum/pos);
    printf("\n%.0f Number of negative numbers: Average %.2f\n",neg,negSum/neg);
    return 0;
}