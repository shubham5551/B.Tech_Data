#include <stdio.h>      // Header file for input and output functions
#include <string.h>     // Header file for string functions (not mandatory here)

int main() {
    char s[100];        // Array to store the input string
    int i, flag = 0;    // flag = 0 means no vowel found initially

    scanf("%s", s);     // Read the string from user input

    // Loop through each character of the string
    for(i = 0; s[i] != '\0'; i++) {

        // Check if the current character is a vowel
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {

            flag = 1;   // Vowel found, set flag to 1
            break;      // Stop checking further characters
        }
    }

    // If vowel is found
    if(flag == 1)
        printf("yes");
    else
        printf("no");   // If no vowel is found

    return 0;           // End of program
}
