// Print numbers from 1 to N
#include <stdio.h>

int main() 
{
    int i, N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    // for loop starts from 1 and goes till N
    // for (initialization; condition; increment)
    for (i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}

