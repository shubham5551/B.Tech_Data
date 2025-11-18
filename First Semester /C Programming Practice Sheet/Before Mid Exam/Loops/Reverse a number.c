// Reverse a number
/*
If a number = num,
then, we can find its reverse using this formula repeatedly:
Formula: reverse=reverse×10+(num%10)
and then remove the last digit from num by: num=num/10
*/
#include <stdio.h>

int main() 
{
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;               // Get last digit
        reverse = reverse * 10 + remainder; // Formula
        num = num / 10;                     // Remove last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}

