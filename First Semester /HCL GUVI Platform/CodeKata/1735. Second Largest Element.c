#include <stdio.h>

int main() {

    int N;                    // Stores number of elements in the array
    int arr[100];             // Array to store integers (maximum size 100)
    int i;                    // Loop counter
    int largest, second;      // Variables to store largest and second largest

    // Read number of elements
    scanf("%d", &N);

    // Read N integers into the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is the largest
    largest = arr[0];
    second = -2147483648;     // Smallest possible int value

    // Find largest and second largest elements
    for (i = 1; i < N; i++) {

        // If current element is greater than largest
        if (arr[i] > largest) {
            second = largest;   // Update second largest
            largest = arr[i];   // Update largest
        }
        // If element is between largest and second largest
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];    // Update second largest
        }
    }

    // Print the second largest element
    printf("%d", second);

    return 0;   // End of program
}
