#include <stdio.h>

int main() {

    char s[1000];      // Array to store the input string
    int i;             // Loop counter
    int count = 0;     // Variable to count vowels

    // Read the string (single word as per problem statement)
    scanf("%s", s);

    // Traverse each character of the string
    for (i = 0; s[i] != '\0'; i++) {

        // Check if the character is a vowel (both lowercase and uppercase)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U') {

            count++;   // Increase vowel count
        }
    }

    // Print the total number of vowels
    printf("%d", count);

    return 0;   // End of program
}
