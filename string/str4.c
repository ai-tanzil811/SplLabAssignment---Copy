//  Write a program in C to count the number of words in a string.#include<stdio.h>
int main()
{
    char tan[100];
    gets(tan);
    int count = 0;
    for (int i = 0; tan[i] != '\0'; i++)
    {
        if (tan[i] == 32)
        {
            count++;
        }
    }
    printf("%d", count+1);
    return 0;
}
// space dile 1 kom ashe
