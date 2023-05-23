// Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators. Go to the editor
// Expected Output :

// Pointer : Demonstrate the use of & and * operator :
// --------------------------------------------------------
//  m = 300
//  fx = 300.600006
//  cht = z

//  Using & operator :
// -----------------------
//  address of m = 0x7ffda2eeeec8
//  address of fx = 0x7ffda2eeeecc
//  address of cht = 0x7ffda2eeeec7

//  Using & and * operator :
// -----------------------------
//  value at address of m = 300
//  value at address of fx = 300.600006
//  value at address of cht = z

// Using only pointer variable :
// ----------------------------------
//  address of m = 0x7ffda2eeeec8
//  address of fx = 0x7ffda2eeeecc
//  address of cht = 0x7ffda2eeeec7

//  Using only pointer operator :
// ----------------------------------
//  value at address of m = 300
//  value at address of fx= 300.600006
//  value at address of cht= z
#include <stdio.h>
int main()
{
    int m = 300;
    float fx = 300.60;
    char cht = 'z';
    printf("\n\n Pointer : Demonstrate the use of & and * operator :\n");
    printf("----------------------------------------------------------\n");
    int *p1;
    float *p2;
    char *p3;
    p1 = &m;
    p2 = &fx;
    p3 = &cht;
    printf(" m = %d\n", m);
    printf(" fx = %f\n", fx);
    printf(" cht = %c\n", cht);
    printf("\n Using & operator :\n");
    printf("-------------------------\n");
    printf(" address of m = %u\n", &m);
    printf(" address of fx = %u\n", &fx);
    printf(" address of cht = %u\n", p3);
    printf("\n Using & and * operator :\n");
    printf("-------------------------------\n");
    printf(" value at address of m = %d\n", *(&m));
    printf(" value at address of fx = %f\n", *(&fx));
    printf(" value at address of cht = %c\n", *(&cht));
    printf("\n Using only pointer variable :\n");
    printf("------------------------------------\n");
    printf(" address of m = %u\n", p1);
    printf(" address of fx = %u\n", p2);
    printf(" address of cht = %u\n", p3);
    printf("\n Using only pointer operator :\n");
    printf("------------------------------------\n");
    printf(" value at address of m = %d\n", *p1);
    printf(" value at address of fx= %f\n", *p2);
    printf(" value at address of cht= %c", *p3);
    return 0;
}