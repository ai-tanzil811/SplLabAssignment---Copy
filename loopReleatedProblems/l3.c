#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);   
    int i, odd = 1;
    for (i = 1; i <= N; i++) {
        printf("%d ", odd);
        odd += 2;
    }   
    return 0;
}
