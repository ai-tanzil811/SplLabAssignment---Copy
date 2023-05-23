#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("Ranges for integer data types in C\n\n");
    printf("------------------------------------------------------------\n");
    printf("int8_t\t\t\t%d\t\t\t%d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int16_t\t\t\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
    printf("int32_t\t\t\t%d\t\t%d\n", INT_MIN, INT_MAX);
    printf("int64_t\t\t\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("uint8_t\t\t\t%d\t\t\t%d\n", 0, UCHAR_MAX);
    printf("uint16_t\t\t%d\t\t\t%d\n", 0, USHRT_MAX);
    printf("uint32_t\t\t%d\t\t%u\n", 0, UINT_MAX);
    printf("uint64_t\t\t%d\t%llu\n", 0, ULLONG_MAX);
    printf("\n============================================================\n\n");
    printf("Ranges for real number data types in C\n\n");
    printf("------------------------------------------------------------\n");
    printf("float\t\t\t%e\t%e\n", FLT_MIN, FLT_MAX);
    printf("double\t\t\t%e\t%e\n", DBL_MIN, DBL_MAX);
    printf("long double\t\t%Le\t%Le\n", LDBL_MIN, LDBL_MAX);
    return 0;
}