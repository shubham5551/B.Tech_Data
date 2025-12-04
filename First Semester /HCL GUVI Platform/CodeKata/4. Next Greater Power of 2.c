#include <stdio.h>

int main() 
{
    int N, p = 1;
    scanf("%d", &N);
    while (p <= N) 
    {
        p = p * 2;
    }

    printf("%d", p);
    return 0;
}
