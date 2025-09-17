#include <stdio.h>
int main(){
    int time, principal;
    float rate;
    time = 2;
    principal = 4000;
    rate = 5.5;
    float interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}