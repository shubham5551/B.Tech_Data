// Calculate factorial of a number
// Formula: n!=1×2×3×4×...×n
// eg: 5!=1×2×3×4×5=120

#include <stdio.h>

int main() 
{
    int n, i;
    long long factorial = 1;  // long long to store big values

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative number
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;  // formula: factorial = factorial × i
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}

