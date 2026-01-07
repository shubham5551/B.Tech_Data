// 2. Program to SWAP two numbers using pointers
#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // pass addresses

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

