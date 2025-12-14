#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {

    // Base case:
    // If n is 0 or 1, factorial is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case:
    // n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {

    int n;   // Variable to store input number

    // Read the input value
    scanf("%d", &n);

    // Call the recursive factorial function and print result
    printf("%d", factorial(n));

    return 0;   // End of program
}
