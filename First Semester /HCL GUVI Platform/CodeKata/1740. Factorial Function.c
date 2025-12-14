#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    
    int i;          // Loop counter
    int fact = 1;   // Variable to store factorial result (initialized to 1)

    // Loop from 1 to n to calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;    // Return factorial value
}

int main() {

    int N;          // Stores the input number
    int result;     // Stores the factorial result

    // Read the input number
    scanf("%d", &N);

    // Call factorial function and store result
    result = factorial(N);

    // Print the factorial
    printf("%d", result);

    return 0;       // End of program
}
