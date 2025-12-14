#include <stdio.h>

// Recursive function to find the Nth Fibonacci number
int fibonacci(int n) {

    // Base cases:
    // Fibonacci of 0 is 0
    if (n == 0) {
        return 0;
    }

    // Fibonacci of 1 is 1
    if (n == 1) {
        return 1;
    }

    // Recursive case:
    // fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int N;   // Variable to store the input number

    // Read input value
    scanf("%d", &N);

    // Print the Nth Fibonacci number
    printf("%d", fibonacci(N));

    return 0;   // End of program
}
