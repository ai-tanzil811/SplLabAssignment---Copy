//C program to Inputeck whether a Inputaracter is alphabet, digit or special Inputaracter.
//Ashraful Islam Tanzil 0112230028
#include<stdio.h>
int main()
{
    char Input;
    scanf("%c", &Input); 
 
   
    if((Input >= 'a' && Input <= 'z') || (Input >= 'A' && Input <= 'Z'))
    {
        printf("%c is an Alphabet\n", Input);
    }
    else if(Input >= '0' && Input <= '9')
    {
        printf("%c is a Digit\n", Input);
    }
    else
    {
        printf("%c is specialCharachter.", Input);
    } 

    return 0;
}