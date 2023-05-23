// Write a program in C to show the basic declaration of a pointer.
#include <stdio.h>
int main()
{
    int m, n, o;
    m = 10;
    int *z;
    z = &m;
    printf("\n\n Pointer : Show the basic declaration of pointer :\n");
	printf("-------------------------------------------------------\n"); 
	printf(" Here is m=10, n and o are two integer variable and *z is an integer");	
    printf(" \n\nz stores the address of m  = %u\n ", z);
    printf("   *z stores the value of m = %u\n", *z);
    printf("  &m is the address of m = %d   \n", &m);
    printf("  &n is the address of n = %d   \n", &n);
    printf("  &o is the address of o = %d   \n", &o);
    printf("  &z is the address of z = %d   \n", &z);

    return 0;
}

//  *z stores the value of m = 10

//  &m is the address of m = 0x7ffd40630d44

//  &n stores the address of n = 0x7ffd40630d48

//  &o  stores the address of o = 0x7ffd40630d4c

//  &z stores the address of z = 0x7ffd40630d50