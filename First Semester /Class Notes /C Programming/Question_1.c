#include <stdio.h>
int main(){
    int diameter = 750;
    float area = 3.14 * (diameter/2.0) * (diameter/2.0);
    printf("Area of circle with diameter %d m is %.2f m^2\n", diameter, area);
    return 0;
}