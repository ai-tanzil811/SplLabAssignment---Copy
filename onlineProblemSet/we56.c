#include <stdio.h>
int main()
{
    int input;
    printf("Input value: ");
    scanf("%d", &input);
    printf("Integer value = %d\n", input);
    printf("The left shifted data is = %d\n", input << 2);
    return 0;
}