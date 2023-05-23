// C program to Inputeck entered Inputaracter vowel or consonant.
// Ashraful isalm Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input;
    scanf("%c", &Input);
    if (Input == 'a' || Input == 'A')
    {
        printf("%c Is a vowell\n", Input);
    }
    else if (Input == 'e' || Input == 'E')
    {
        printf("%c Is a vowell\n", Input);
    }
    else if (Input == 'i' || Input == 'I')
    {
        printf("%c Is a vowell\n", Input);
    }
    else if (Input == 'o' || Input == 'O')
    {
        printf("%c Is a vowell\n", Input);
    }
    else if (Input == 'u' || Input == 'U')
    {
        printf("%c Is a vowell\n", Input);
    }
    else
    {
        printf("%c Is a Consonant\n", Input);
    }

    return 0;
}