// Ashraful ISlam Tanzil 0112230028
#include <stdio.h>
void tanzil(char input);
int main()
{
    char input;
    scanf("%c", &input);
    tanzil(input);
    return 0;
}
void tanzil(char input)
{
    printf("Value recieved from main: %c", input);
}