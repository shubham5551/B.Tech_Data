#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    int isPrime = 1; // Assume prime
    if (N <= 1) 
    {
        isPrime = 0; // 0 and 1 are not prime
    }
    for (int i = 2; i <= N / 2; i++) 
    {
        if (N % i == 0) 
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("yes");
    else
        printf("no");

    return 0;
}
