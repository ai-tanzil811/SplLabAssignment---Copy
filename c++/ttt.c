#include<stdio.h>
struct farin{
int a;
char name[20];
};
int main()
{
    struct farin array[3];
    array[0].a=5;

    int a=5;
    int b=7;
    char k ='a';
    char arr[3];
    arr[0]='F';
    arr[1]=2;
    arr[2]=3;
    printf("%d",array[0].a);

}
