#include <stdio.h>

int main() {
    int N, L, R;

    scanf("%d", &N);        // Read the number N
    scanf("%d %d", &L, &R); // Read the range L and R

    // Check if N lies between L and R (inclusive)
    if(N >= L && N <= R)
        printf("yes");
    else
        printf("no");

    return 0;               // End of program
}
