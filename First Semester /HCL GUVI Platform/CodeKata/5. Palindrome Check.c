#include <stdio.h>
#include <string.h>
int main() 
{
    char S[100];
    scanf("%s", S);
    int i = 0;
    int j = strlen(S) - 1;
    int isPalindrome = 1;
    while (i < j) 
    {
        if (S[i] != S[j]) 
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("yes");
    else
        printf("no");

    return 0;
}
