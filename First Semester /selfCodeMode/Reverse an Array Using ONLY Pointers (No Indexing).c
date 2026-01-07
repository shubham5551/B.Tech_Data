// Reverse an Array Using ONLY Pointers (No Indexing)
#include <stdio.h>     // Header file for input/output

int main() 
{
    int arr[5],i ,*start ,*end ,temp;        
	// Declare integer array of size 5
    // Pointer to first element
    // Pointer to last element
    // Temporary variable for swapping
	
    printf("Enter 5 elements:\n");

    // Input array elements using indexing (allowed for input)
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }

    start = arr;        // start points to first element of array
    end = arr + 4;      // end points to last element of array

    // Reverse array using pointers
    while (start < end) {

        temp = *start;  // Store value at start
        *start = *end;  // Copy value from end to start
        *end = temp;    // Copy stored value to end
        start++;        // Move start pointer forward
        end--;          // Move end pointer backward
    }

    printf("Reversed array:\n");

    // Display reversed array
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;   // End of program
}

