#include <stdio.h>

// Recursive function to find GCD using Euclidean algorithm
int gcd(int a, int b) {

    // Base case:
    // If second number becomes 0, first number is the GCD
    if (b == 0) {
        return a;
    }

    // Recursive case:
    // gcd(a, b) = gcd(b, a % b)
    return gcd(b, a % b);
}

int main() {

    int A, B;   // Variables to store the two input numbers

    // Read two integers
    scanf("%d %d", &A, &B);

    // Call gcd function and print the result
    printf("%d", gcd(A, B));

    return 0;   // End of program
}
