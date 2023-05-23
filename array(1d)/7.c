// WAP that will take n alphabets into an array, and then count number of vowels in that
// array.
#include <stdio.h>
int main()
{
    int n, c = 0;
    printf("Enter the size = ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the alphabets = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
        {
            c++;
        }
    }
    printf("c: %d", c);
    return 0;
}