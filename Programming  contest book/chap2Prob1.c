#include <stdio.h>
#include<math.h>
float distanceBetweeinput2Points(int a, int b, int c, int d);
int main()
{
    int input1, input2;
    int input3, input4;
    printf("Enter first points cordinate: ");
    scanf("%d %d", &input1, &input2);
    printf("Enter 2nd points cordinate : ");
    scanf("%d %d", &input3, &input4);
    printf("Distance between 2 points  are: %.2f", distanceBetweeinput2Points(input1, input2, input3, input4));
    return 0;
}
float distanceBetweeinput2Points(int a, int b, int c, int d)
{
    return sqrt(pow(a - b, 2) + pow((a - b), 2));
}