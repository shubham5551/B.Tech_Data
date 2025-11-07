// Check whether a number is divisible by both 3 and 5
#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // check divisibility
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } 
    else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}

