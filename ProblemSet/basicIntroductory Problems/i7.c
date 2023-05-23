// Program that will receive the values of an integer, a floating point number, a character from
// the keyboard and print those values.
#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter an integer, a floating point number and a character: ");
    scanf("%d %f ", &a, &b);
    getchar();
    scanf("%c", &c);
    printf("The integer value: %d", a);
    printf("The floating point value: %f", b);
    printf("The character value: %c", c);
    return 0;
}