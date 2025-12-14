#include <stdio.h>

int main() {

    int customers;               // Stores number of customers
    int fruits;                  // Stores number of fruits for a customer
    int i, j;                    // Loop counters
    float price;                 // Stores price of a single fruit
    float customerTotal;         // Total bill for one customer
    float marketTotal = 0.0;     // Total earnings for the market

    // Read number of customers
    scanf("%d", &customers);

    // Loop for each customer
    for (i = 1; i <= customers; i++) {

        // Reset customer total for every new customer
        customerTotal = 0.0;

        // Read number of fruits purchased by current customer
        scanf("%d", &fruits);

        // Loop to read prices of all fruits
        for (j = 1; j <= fruits; j++) {
            scanf("%f", &price);     // Read fruit price
            customerTotal += price; // Add price to customer's total bill
        }

        // Print total bill for the current customer
        printf("Total bill for Customer %d: $%.1f\n", i, customerTotal);

        // Add customer's bill to total market earnings
        marketTotal += customerTotal;
    }

    // Print total earnings of the market for the day
    printf("Total earnings for the day: $%.1f", marketTotal);

    return 0;   // End of program
}
