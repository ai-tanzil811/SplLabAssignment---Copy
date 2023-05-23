#include <stdio.h>
int main()
{
    printf("Size of C data types:\n\n");
    printf("Type\t\t\tBytes\n\n");
    printf("--------------------------------\n");
    printf("char\t\t\t%lu\n", sizeof(char));
    printf("int8_t\t\t\t%lu\n", sizeof(int8_t));
    printf("unsigned char\t\t%lu\n", sizeof(unsigned char));
    printf("uint8_t\t\t\t%lu\n", sizeof(uint8_t));
    printf("short\t\t\t%lu\n", sizeof(short));
    printf("int16_t\t\t\t%lu\n", sizeof(int16_t));
    printf("uint16t\t\t\t%lu\n", sizeof(uint16_t));
    printf("int\t\t\t%lu\n", sizeof(int));
    printf("unsigned\t\t%lu\n", sizeof(unsigned));
    printf("long\t\t\t%lu\n", sizeof(long));
    printf("unsigned long\t\t%lu\n", sizeof(unsigned long));
    printf("int32_t\t\t\t%lu\n", sizeof(int32_t));
    printf("uint32_t\t\t%lu\n", sizeof(uint32_t));
    printf("long long\t\t%lu\n", sizeof(long long));
    printf("int64_t\t\t\t%lu\n", sizeof(int64_t));
    printf("unsigned long long\t%lu\n", sizeof(unsigned long long));
    printf("uint64_t\t\t%lu\n", sizeof(uint64_t));
    printf("float\t\t\t%lu\n", sizeof(float));
    printf("double\t\t\t%lu\n", sizeof(double));
    printf("long double\t\t%lu\n", sizeof(long double));
    printf("_Bool\t\t\t%lu\n", sizeof(_Bool));
    return 0;
}