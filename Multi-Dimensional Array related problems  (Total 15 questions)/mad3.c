// WAP that will take inputs of a 3 by 3 matrix into a 2D array. Now find the determinant of
// this matrix.
#include<stdio.h>
#define n 3
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int det = 0;
    for (int i = 0; i < 3; i++)
    {
        det = det + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
        //first colun + next column - 
        //first value * (second value * third value - second value * third value)
    }
    printf("%d", det);
    return 0;
}