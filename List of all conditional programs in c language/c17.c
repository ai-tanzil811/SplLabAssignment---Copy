// C program to count total number of notes in entered amount
// Ashraful Islam Tanzil 0112230028
#include <stdio.h>
int main()
{
    int amount;
    scanf("%d", &amount);
    int note[8] = {1000, 500, 100, 50, 20, 10, 5, 1};
    int output[8];
    for (int i = 0; i < 8; i++)
    {
        output[i] = amount / note[i];
        amount = amount % note[i];
        
    }
    for (int j = 0; j < 8; j++)
        {
            printf("%d notes of %d\n", output[j], note[j]);
        }
    return 0;
}
