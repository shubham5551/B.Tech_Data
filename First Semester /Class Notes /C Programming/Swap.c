#include <stdio.h>
int main(){
    int a = 20, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}