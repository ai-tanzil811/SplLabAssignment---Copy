#include<stdio.h>
int main()
{
    int distance;
    float fuel;
    printf("Input total distance in km: ");
    scanf("%d",&distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f",&fuel);
    float average = distance/fuel;
    printf("Average consumption (km/lt) %.3f\n",average);
    return 0;
}
