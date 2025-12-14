#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    if (N % 7 == 0 && N % 11 != 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
