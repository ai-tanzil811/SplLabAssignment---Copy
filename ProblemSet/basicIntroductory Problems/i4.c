#include <stdio.h>
int main()
{
    int a ;
    float b; 
    char c ;
    scanf("%d %f %c", &a, &b, &c);
    getchar();
    printf("The integer value: %d", a);
    printf("The floating point value: %f", b);
    printf("The character value: %c", c);
    return 0;
}
