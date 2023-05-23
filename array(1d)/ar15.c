// WAP that will take n integers into an array A and m positive integers into array B. Now
// find the union (set operation) of array A and B.
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[n + m];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        c[k] = b[i];
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (c[i] == c[j])
            {
                for (int l = j; l < k; l++)
                {
                    c[l] = c[l + 1];
                }
                k--;
                j--;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}