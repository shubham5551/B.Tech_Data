#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {

    int temp;      // Temporary variable for swapping

    // Store value of x in temp
    temp = *x;

    // Store value of y in x
    *x = *y;

    // Store value of temp in y
    *y = temp;
}

int main() {

    int A, B;      // Variables to store input numbers

    // Read two integers
    scanf("%d %d", &A, &B);

    // Call swap function and pass addresses of A and B
    swap(&A, &B);

    // Print swapped values
    printf("%d %d", A, B);

    return 0;      // End of program
}
