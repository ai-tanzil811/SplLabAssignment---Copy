
#include <stdio.h>
int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp;
    for (int i = 0; i < n; i++)//index move korbe
    {
        for (int j = i + 1; j < n; j++)//index 1 beshi kore move korbe
        {
            if (a[i] == a[j])//matching
            {
                for (int k = j; k < n; k++)//notun kore store kortesi
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("ARRAY A : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}