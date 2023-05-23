#include<stdio.h>
int batman(char a[],char b[]);
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int z=batman(a,b);
    printf("%d",z);
    return 0;

}
int batman(char a[], char b[]) {
    int i, j;
    int len_a = strlen(a);
    int len_b = strlen(b);

    for (i = 0; i <= len_a - len_b; i++) {
        for (j = 0; j < len_b; j++) {
            if (a[i+j] != b[j])
                break;
        }
        if (j == len_b)
            return 1;
    }
    return -1;
}