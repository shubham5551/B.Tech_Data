// Check whether a year is a leap year or not
#include <stdio.h>

int main() {
    int year;

    // take input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // check leap year condition
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

