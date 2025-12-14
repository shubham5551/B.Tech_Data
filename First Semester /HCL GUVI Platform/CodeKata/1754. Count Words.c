#include <stdio.h>

int main() {

    char s[1000];      // Array to store the input sentence
    int i;             // Loop counter
    int count = 0;     // Variable to count words

    // Read the complete sentence (including spaces)
    fgets(s, sizeof(s), stdin);

    /*
      Logic:
      - A word starts when a non-space character
        comes after a space or at the beginning
    */
    for (i = 0; s[i] != '\0'; i++) {

        // Check start of a word
        if ((i == 0 && s[i] != ' ' && s[i] != '\n') ||
            (s[i] != ' ' && s[i] != '\n' && s[i - 1] == ' ')) {
            count++;
        }
    }

    // Print number of words
    printf("%d", count);

    return 0;   // End of program
}
