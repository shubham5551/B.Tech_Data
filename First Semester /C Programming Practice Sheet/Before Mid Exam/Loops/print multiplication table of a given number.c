// print multiplication table of a given number
// Result=n×i

#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter a number to print it's multiplication table: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d:\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);  // formula: result = n * i
    }

    return 0;
}

