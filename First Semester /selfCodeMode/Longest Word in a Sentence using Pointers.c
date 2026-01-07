// Find the Longest Word in a Sentence using Pointers
#include <stdio.h>          // Header file for input/output functions

int main() {
    char sentence[200];     // Character array to store the sentence
    char *ptr;              // Pointer to traverse each character of sentence
	int i; 					// For loop
    int maxLen = 0;         // Stores length of the longest word found
    int currLen = 0;        // Stores length of the current word

    char *maxStart = NULL;  // Pointer to starting character of longest word
    char *currStart = NULL; // Pointer to starting character of current word

    printf("Enter a sentence:\n"); 
    gets(sentence);         // Reads full sentence including spaces

    ptr = sentence;         // Initialize pointer to first character of sentence

    // Loop until end of string '\0' is reached
    while (*ptr != '\0') {

        // If current character is not a space
        if (*ptr != ' ') {

            // If this is the first character of a word
            if (currLen == 0) {
                currStart = ptr;   // Save starting address of the word
            }

            currLen++;             // Increase current word length
        } 
        else { // If space is encountered (word ended)

            // Check if current word is longest
            if (currLen > maxLen) {
                maxLen = currLen;      // Update longest length
                maxStart = currStart;  // Save starting address
            }

            currLen = 0;   // Reset length for next word
        }

        ptr++;  // Move pointer to next character
    }

    // Check last word (because it may not end with space)
    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = currStart;
    }

    printf("Longest word: ");

    // Print longest word character by character
    for (i = 0; i < maxLen; i++) {
        printf("%c", *(maxStart + i));
    }

    return 0;   // End of program
}

