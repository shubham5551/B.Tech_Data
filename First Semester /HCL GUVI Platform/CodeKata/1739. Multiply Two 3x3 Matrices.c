#include <stdio.h>

int main() {

    int A[3][3];    // First 3x3 matrix
    int B[3][3];    // Second 3x3 matrix
    int C[3][3];    // Resultant 3x3 matrix
    int i, j, k;    // Loop counters

    // Read elements of first 3x3 matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of second 3x3 matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    /*
      Matrix multiplication logic:
      C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j]
    */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resultant 3x3 matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 2)
                printf("%d", C[i][j]);   // No space at end of row
            else
                printf("%d ", C[i][j]);
        }
        printf("\n");   // New line after each row
    }

    return 0;   // End of program
}
