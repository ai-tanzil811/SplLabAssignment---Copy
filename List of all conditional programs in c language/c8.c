// C program to Inputeck uppercase or lowercase alphabets.
// 0112230028 Ashraful Islam Tanzil
#include <stdio.h>
int main()
{
    char Input;
    scanf("%c", &Input);
    if (Input >= 'a' && Input <= 'z')
        printf("Lowercase ALphabet\n");
    else if (Input >= 'a' && Input <= 'z')
        printf("UpperCase ALphabet\n");
    else
        printf("Not an  ALphabet\n");
    return 0;
}