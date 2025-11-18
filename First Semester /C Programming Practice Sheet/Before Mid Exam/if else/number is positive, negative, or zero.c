// Check whether a number is positive, negative, or zero
#include <stdio.h>

int main() {
    int num;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // check number type
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } 
    else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } 
    else {
        printf("The number is zero.\n");
    }

    return 0;
}

