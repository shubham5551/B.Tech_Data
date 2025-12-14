#include <stdio.h>

int main() {

    int N;                 // Stores number of elements in the array
    int arr[100];          // Array to store integers (maximum size 100)
    int i;                 // Loop counter
    int sum = 0;           // Variable to store sum of array elements

    // Read number of elements
    scanf("%d", &N);

    // Read N integers into the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Add each element of the array to sum
    for (i = 0; i < N; i++) {
        sum = sum + arr[i];
    }

    // Print the total sum
    printf("%d", sum);

    return 0;   // End of program
}
