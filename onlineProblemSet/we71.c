#include <stdio.h>
#include <string.h>
int main()
{
    printf("Input a string\n");
    char str[100];
    fgets(str, sizeof(str), stdin);
    char str2[100];
    strcpy(str2, str);
    printf("Original string: %s\n", str);
    printf("Number of characters = %d\n", strlen(str2));
    return 0;
}