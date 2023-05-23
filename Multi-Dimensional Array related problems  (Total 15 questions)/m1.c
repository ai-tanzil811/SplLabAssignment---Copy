// //Ashraful Islam Tanzil 0112230028
// WAP that will take n integers into a sqrt(n) by sqrt(n) array (2D) and show them as
// traditional matrix view.
#include <stdio.h>
#include <math.h>
#define x 100
int main()
{
    int n;
    scanf("%d", &n);
    int a[x][x];
    int m = sqrt(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//  for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
