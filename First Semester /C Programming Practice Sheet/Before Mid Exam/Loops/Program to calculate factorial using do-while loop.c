// Program to calculate factorial using do-while loop
// formula: n!=1×2×3×4×...×n
#include <stdio.h>

int main() {
    int n, i = 1;
    long long factorial = 1; // use long long for large results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn’t exist.\n");
    } 
    else {
        // do-while loop to calculate factorial
        do {
            factorial = factorial * i; // formula: factorial = factorial × i
            i++;
        } while (i <= n);

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}

