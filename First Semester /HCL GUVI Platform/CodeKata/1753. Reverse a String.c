#include <stdio.h>
#include <string.h>

int main() {

    char s[1000];     // Array to store the input string
    int i, len;       // Loop variable and length of the string

    // Read the string (single word, no spaces)
    scanf("%s", s);

    // Find length of the string
    len = strlen(s);

    // Print characters in reverse order
    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    return 0;   // End of program
}
