// Check eligibility to vote (age = 18)
#include <stdio.h>

int main() {
    int age;

    // take age input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    // check voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } 
    else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

