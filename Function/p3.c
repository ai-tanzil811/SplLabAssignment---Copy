// Ashraful ISlam Tanzil 0112230028
#include <stdio.h>
int tanzil(int a);
int main()
{
    int a;
    int z;
    scanf("%d", &a);
    z=tanzil(a);
    return 0;
}
int tanzil(int a)
{
    return (a % 2 == 0) ?  printf("Even"): printf("Odd");
}