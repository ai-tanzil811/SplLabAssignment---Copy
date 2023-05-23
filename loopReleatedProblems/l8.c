// Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at
// the keyboard.
#include<stdio.h>
int main()
{
    char ch;
    int i=1;
    while(1)
    {
        scanf("%c", &ch);
        if(ch=='A')
        {
            break;
        }
        else
        {
            printf("input %d ,%c",i, ch);
            i++;
        }
    }
    return 0;
}