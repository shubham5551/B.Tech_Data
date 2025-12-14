#include <stdio.h>

int main() {

    int N;                // Stores number of elements in the array
    int arr[100];         // Array to store elements (max size 100)
    int i;                // Loop counter

    // Read number of elements
    scanf("%d", &N);

    // Read N elements into the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements in reverse order (from last index to first)
    for (i = N - 1; i >= 0; i--) {
        if (i == 0)
            printf("%d", arr[i]);   // Last printed element (no space)
        else
            printf("%d ", arr[i]);  // Print space between elements
    }

    return 0;   // End of program
}
