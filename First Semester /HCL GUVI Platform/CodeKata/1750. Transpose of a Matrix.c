#include <stdio.h>

int main() {

    int N;                  // Size of the square matrix
    int matrix[100][100];   // Original matrix (max size 100x100)
    int i, j;               // Loop counters

    // Read size of the matrix
    scanf("%d", &N);

    // Read elements of the matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    /*
      Print transpose of the matrix
      Transpose means: rows become columns and columns become rows
    */
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {

            // Print transposed element
            if (j == N - 1)
                printf("%d", matrix[j][i]);  // No extra space
            else
                printf("%d ", matrix[j][i]);
        }
        printf("\n");   // New line after each row
    }

    return 0;   // End of program
}
