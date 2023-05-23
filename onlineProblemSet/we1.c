#include <stdio.h>
#define n 100
#include <string.h>
int main()
{
    char a[n];
    char b[n];
    long longn int x;
    printf("Enter your name : ");
    fgets(a, sizeof(a), stdin);

    printf("\nEnter your date of birth : ");
    fgets(b, sizeof(b), stdin);
    printf("\nEnter your Mobile Number : ");
    scanf("%d", &x);
    printf("---------------------------------\n");
    printf("name : %s\n",a);
    printf("date of birth : %s\n", b);
    printf("Mobile Number : %lld\n", x);
    return 0;
}