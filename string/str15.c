// Write a program in C to reverse the words in a string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void firstchecker1(char str[], int flag1, int flag2)
{
    for (int i = flag1 + 1; i < flag2; i++)
    {
        printf("%c", str[i]);
    }
}

void reverseString(char str[], int count)
{

    int i = 0;
    int index[count], x = 1;
    index[0] = -1;
    for(int i=0;str[i]!='\0';i++)
    {
         if (str[i] == ' ')
        {
            index[x] = i;
            x++;
        }
    }
    index[x] = i;
    int flag1, flag2;
    for (int i = x; i > 0; i--)
    {
        flag1 = index[i - 1];
        flag2 = index[i];
        firstchecker1(str, flag1, flag2);
        printf(" ");
    }
}

int main()
{
    char s1[1000];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;
    int count = 0;
    int i = 0;
    while (s1[i] != '\0')
    {
        count++;
        i++;
    }
    reverseString(s1, count);
    return 0;
}
//uncompleted
