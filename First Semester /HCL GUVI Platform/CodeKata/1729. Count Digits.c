#include <stdio.h>
int main() 
{
    int N, count = 0;
    scanf("%d", &N);
    if (N == 0) 
    {printf("1");
    return 0;
    }
    if (N < 0)
        N = -N;
    while (N > 0) 
    {
        N /= 10;
        count++;
    }
    printf("%d", count);
    return 0;
}
