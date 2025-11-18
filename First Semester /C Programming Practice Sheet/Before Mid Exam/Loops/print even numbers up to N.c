// Print even numbers up to N
// Formula: Even number=2×n
#include <stdio.h>

int main() 
{
    int i, N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d are:\n", N);

    // Loop from 1 to N
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {  // Check if number is even
            printf("%d\n", i);
        }
    }

    return 0;
}

