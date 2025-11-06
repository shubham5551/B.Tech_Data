// WAP in c to calculate the area of the rectangle
// Area=Length×Breadth
#include <stdio.h>

int main() {
    float length, breadth, area;  // declaring variables

    // asking user for input
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // calculating area
    area = length * breadth;

    // displaying result
    printf("The area of the rectangle is: %.2f", area);

    return 0;
}

