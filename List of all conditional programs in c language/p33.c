//C Program to Find the Largest Number using Conditional Operator
// ASRAFUL ISLAM TANZIL 0112230028
#include <stdio.h>
int main()
{
    int input1, input2, input3, max;
    scanf("%d%d%d", &input1,& input2, &input3);
    max = (input1 >= input2) ? (input1 >= input3) ? input1 : input3 : (input2 >= input3) ? input2
                                                                                         : input3;
    printf(" Max number %d", max);
    return 0;
}