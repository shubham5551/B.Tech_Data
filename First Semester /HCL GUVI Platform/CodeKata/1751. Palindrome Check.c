#include <stdio.h>
#include <string.h>

int main() {

    char s[1000];        // Array to store the input string
    int i, len;          // Loop variable and length of string
    int isPalindrome = 1; // Flag variable (assume palindrome)

    // Read the string (no spaces assumed as per problem)
    scanf("%s", s);

    // Find length of the string
    len = strlen(s);

    // Check characters from start and end
    for (i = 0; i < len / 2; i++) {

        // If mismatch found, it is not a palindrome
        if (s[i] != s[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Print result
    if (isPalindrome)
        printf("Yes");
    else
        printf("No");

    return 0;   // End of program
}
