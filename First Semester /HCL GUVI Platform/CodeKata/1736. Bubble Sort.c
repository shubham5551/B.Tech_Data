#include <stdio.h>

int main() {

    int N;                 // Number of elements
    int arr[100];          // Array to store elements
    int i, j;              // Loop counters
    int temp;              // Variable for swapping

    // Read number of elements
    scanf("%d", &N);

    // Read array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort algorithm
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {

            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array WITHOUT extra space at the end
    for (i = 0; i < N; i++) {
        if (i == N - 1)
            printf("%d", arr[i]);   // Last element (no space)
        else
            printf("%d ", arr[i]);  // Space between numbers
    }

    return 0;   // End of program
}
