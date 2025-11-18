// Find the largest among three numbers
#include <stdio.h>

int main() {
    int a, b, c;

    // take input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // check which number is largest
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    } 
    else {
        printf("%d is the largest number.\n", c);
    }

    return 0;
}

