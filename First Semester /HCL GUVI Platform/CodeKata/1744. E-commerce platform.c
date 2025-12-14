#include <stdio.h>

/*
  Recursive function to calculate total cost of items
  items[] : array of item prices
  n       : number of items
*/
float calculateTotalCost(int items[], int n) {

    // Base case: no items left
    if (n == 0) {
        return 0;
    }

    // Recursive case:
    // price of last item + sum of remaining items
    return items[n - 1] + calculateTotalCost(items, n - 1);
}

/*
  Function to apply discount based on item count
*/
float applyDiscount(float totalCost, int itemCount) {

    float discountRate = 0.0;

    // Decide discount tier
    if (itemCount >= 1 && itemCount <= 5) {
        discountRate = 0.05;   // 5% discount
    } 
    else if (itemCount >= 6 && itemCount <= 10) {
        discountRate = 0.10;   // 10% discount
    } 
    else if (itemCount > 10) {
        discountRate = 0.15;   // 15% discount
    }

    // Apply discount
    return totalCost - (totalCost * discountRate);
}

int main() {

    int N;                 // Number of items
    int items[100];        // Prices of items
    int i;
    float totalCost;       // Total cost before discount
    float finalCost;       // Cost after discount

    // Read number of items
    scanf("%d", &N);

    // Read item prices
    for (i = 0; i < N; i++) {
        scanf("%d", &items[i]);
    }

    // Calculate total cost using recursion
    totalCost = calculateTotalCost(items, N);

    // Apply discount
    finalCost = applyDiscount(totalCost, N);

    // Print final cost rounded to 2 decimal places
    printf("%.2f", finalCost);

    return 0;   // End of program
}
