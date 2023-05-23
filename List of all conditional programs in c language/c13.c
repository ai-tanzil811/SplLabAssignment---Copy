// C program to detrermine a candidate’s age is eligible for casting the vote or not.
// Ashraful Islam TAnzil 0112230028
#include <stdio.h>
int main()
{
    int ageInput;
    scanf("%d", &ageInput);
    (ageInput >= 18) ? printf("ELigible\n") : printf("Not Eligible\n");
    return 0;
}