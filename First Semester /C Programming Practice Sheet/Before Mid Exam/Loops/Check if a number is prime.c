// Check if a number is prime
// n is prime if n%i=0 for all i in [2,rootn]
#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    int n, i, isPrime = 1; // Assume number is prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Check divisibility from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0; // Found a divisor, not prime
            break;
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

