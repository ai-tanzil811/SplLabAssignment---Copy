// WAP that will take n integers into an array, and then search a number into that array. If
// found then print its index. If not found then print “NOT FOUND”.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int searchvalue, flag = 0;
    printf("Enter the number = ");
    scanf("%d", &searchvalue);
    int p[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == searchvalue)
        {
            flag = 1;
            p[count] = i;
            count++;
        }
    }
    if (flag == 1)
    {
        printf("FOUND at index position: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d", p[i]);
            if (i < count - 1)
            {
                printf(", ");
            }
        }
    }
    else
    {
        printf("NOT FOUND");
    }
    return 0;
}

//