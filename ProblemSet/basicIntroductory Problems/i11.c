
#include<stdio.h>
int main()
{
    unsigned int a = 4294967295;
    unsigned long int b = 4294967295;
    unsigned long long int c = 18446744073709551615;
    unsigned short int d = 65535;
    printf("The unsigned int value: %u", a);
    printf("The unsigned long int value: %lu", b);
    printf("The unsigned long long int value: %llu", c);
    printf("The unsigned short int value: %hu", d);
    return 0;
}
