#include <stdio.h>

int main() {
    
    int N;        // Variable to store the input number
    int sum;      // Variable to store the sum result

    // Read the value of N from the user
    scanf("%d", &N);

    /*
      Formula to calculate sum of first N natural numbers:
      sum = N * (N + 1) / 2
      Example: If N = 5
      sum = 5 * 6 / 2 = 15
    */
    sum = N * (N + 1) / 2;

    // Print the calculated sum
    printf("%d", sum);

    return 0;     // End of program
}
