// Write C program to print number in words
//  Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int Input;
    scanf("%d", &Input);
    switch (Input)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:

        printf("Three");
        break;
    case 4:

        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    case 10:
        printf("Ten");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}