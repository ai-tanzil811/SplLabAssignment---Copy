#include <stdio.h>
#include <math.h>
double calcMean(int arr[], int num_of_elem);
double calcStdDev(int arr[], int num_of_elem);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    double sd = calcStdDev(arr, n);
    printf("%.2lf", sd);
}

double calcMean(int arr[], int num_of_elem)
{
    double sum = 0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sum += arr[i];
    }
    double tan;
    tan=sum /(double) num_of_elem;
    return tan;
}

double calcStdDev(int arr[], int num_of_elem)
{
    double mean = calcMean(arr, num_of_elem);
    double sd = 0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sd += ((arr[i] - mean) * (arr[i] - mean));
    }
    double tan = sqrt(sd / (double)num_of_elem);
    return tan;
}