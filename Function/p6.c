// Function to calculate the sum of n numbers coming from the console.
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int tanzil(int);
int main()
{
    int input;
    scanf("%d", &input);
    int result;
    result = tanzil(input);
    printf("Sum in main:%d\n", result);
    return 0;
}

int tanzil(int x)
{
    int num, sum = 0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum in function:%d\n", sum);
    return sum;
}