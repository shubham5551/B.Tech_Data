#include <stdio.h>

// Union to store details of either Savings or Checking account
union AccountDetails {

    // Savings account details
    struct {
        float balance;        // Current balance
        float interestRate;   // Annual interest rate
    } savings;

    // Checking account details
    struct {
        float balance;        // Current balance
        float overdraftLimit; // Overdraft limit
    } checking;
};

// Structure to store bank account information
struct BankAccount {
    char accountHolderName[100];  // Name of account holder
    int accountType;              // 1 = Savings, 2 = Checking
    union AccountDetails details; // Account details (union)
};

int main() {

    struct BankAccount account;   // Declare a BankAccount variable

    // Read account holder name
    scanf(" %[^\n]", account.accountHolderName);

    // Read account type
    scanf("%d", &account.accountType);

    // If Savings Account
    if (account.accountType == 1) {

        // Read balance and interest rate
        scanf("%f %f",
              &account.details.savings.balance,
              &account.details.savings.interestRate);

        // Display savings account details
        printf("Savings Account Balance: %.2f\n",
               account.details.savings.balance);
        printf("Annual Interest Rate: %.2f%%",
               account.details.savings.interestRate);
    }

    // If Checking Account
    else if (account.accountType == 2) {

        // Read balance and overdraft limit
        scanf("%f %f",
              &account.details.checking.balance,
              &account.details.checking.overdraftLimit);

        // Display checking account details
        printf("Checking Account Balance: %.2f\n",
               account.details.checking.balance);
        printf("Overdraft Limit: %.2f",
               account.details.checking.overdraftLimit);
    }

    return 0;   // End of program
}
