// Check whether a number is even or odd
#include <stdio.h>

int main() {
    int num; // variable to store number

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // check if number is even or odd using modulus operator
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

