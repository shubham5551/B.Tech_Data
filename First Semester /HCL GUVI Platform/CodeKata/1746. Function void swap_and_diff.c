#include <stdio.h>
#include <stdlib.h>   // For abs()

// Function to swap values and store difference in second variable
void swap_and_diff(int *x, int *y) {

    int original_x = *x;   // Store original x
    int original_y = *y;   // Store original y
    int temp;              // Temporary variable for swap

    // Swap the values
    temp = *x;
    *x = *y;
    *y = temp;

    // Store absolute difference in second variable
    *y = abs(original_x - original_y);
}

int main() {

    int x, y;   // Input variables

    // Read input values
    scanf("%d %d", &x, &y);

    // Call function
    swap_and_diff(&x, &y);

    // Print final values
    printf("%d %d", x, y);

    return 0;
}
