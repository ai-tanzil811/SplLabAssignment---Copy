#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int years = days/365;
    int weeks = (days%365)/7;
    int days1 = (days%365)%7;
    printf("Years: %d\n",years);
    printf("Weeks: %d\n",weeks);
    printf("Days: %d\n",days1);
    return 0;
}