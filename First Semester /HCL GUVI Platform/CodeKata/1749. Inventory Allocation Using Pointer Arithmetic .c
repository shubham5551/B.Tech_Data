#include <stdio.h>
#include <stdlib.h>   // For malloc() and free()

int main() {

    int S;   // Number of sections
    int C;   // Number of categories per section
    int X;   // Quantity to be added
    int i, j;

    // Read number of sections
    scanf("%d", &S);

    // Read number of categories
    scanf("%d", &C);

    /*
      Dynamically allocate memory for inventory.
      Total elements = S * C
      We use a single continuous block of memory.
    */
    int *inventory = (int *)malloc(S * C * sizeof(int));

    // Read current stock levels using pointer arithmetic
    for (i = 0; i < S; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", (inventory + i * C + j));
        }
    }

    // Read quantity to be added
    scanf("%d", &X);

    // Update stock levels using pointer arithmetic
    for (i = 0; i < S; i++) {
        for (j = 0; j < C; j++) {
            *(inventory + i * C + j) += X;
        }
    }

    // Print updated inventory section-wise
    for (i = 0; i < S; i++) {
        for (j = 0; j < C; j++) {
            if (j == C - 1)
                printf("%d", *(inventory + i * C + j));  // No extra space
            else
                printf("%d ", *(inventory + i * C + j));
        }
        printf("\n");
    }

    // Free allocated memory
    free(inventory);

    return 0;   // End of program
}
