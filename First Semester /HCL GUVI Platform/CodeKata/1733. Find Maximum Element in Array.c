#include <stdio.h>

int main() {

    int N;                 // Stores number of elements in the array
    int arr[100];          // Array to store integers (max size 100)
    int i;                 // Loop counter
    int max;               // Variable to store maximum element

    // Read number of elements
    scanf("%d", &N);

    // Read N elements into the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is the maximum
    max = arr[0];

    // Compare each element with current maximum
    for (i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];   // Update maximum if larger element is found
        }
    }

    // Print the maximum element
    printf("%d", max);

    return 0;   // End of program
}
