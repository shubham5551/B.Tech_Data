// Print Fibonacci series up to N terms
#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", first);               // Print current term
        next = first + second;               // Formula: F(n) = F(n-1) + F(n-2)
        first = second;                      // Move second to first
        second = next;                       // Move next to second
    }

    return 0;
}

