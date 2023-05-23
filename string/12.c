// Write a program in C to count occurrences of a word in a taning.
#include <stdio.h>
#include <string.h>
int main()
{

    char tan[100];
    gets(tan);
    char word[100];
    printf("Enter the word: ");
    scanf("%s", &word);
    int i, j, count = 0;
    int length = tanlen(word);
    for (i = 0; tan[i] != 0; i++)
    {
        if (tan[i] == word[0])
        {
            for (j = 0; j < length; j++)
            {
                if (tan[i + j] != word[j])
                    break;
            }
            if (j == length)
                count++;
        }
    }
    printf("%d", count);
}