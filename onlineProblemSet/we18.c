#include<stdio.h>
int main()
{
    int days;
    printf("Input no. of days: ");
    scanf("%d",&days);
    int years = days/365;
    int months = (days%365)/30;
    int day = (days%365)%30;
    printf("%d Year(s)\n%d Month(s)\n%d Day(s)\n",years,months,day);
    return 0;
}