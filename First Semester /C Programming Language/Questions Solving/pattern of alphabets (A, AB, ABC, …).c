// Print pattern of alphabets (A, AB, ABC, …)
/*

A  
A B  
A B C  
A B C D  
A B C D E 
 
*/
#include <stdio.h>

int main() {
    int i, j, row, col;
    char ch;

    // take number of rows from user
    printf("Enter number of rows: ");
    scanf("%d", &i);

    for (row = 1; row <= i; row++) 
	{
        ch = 'A'; // start from A each row
        for (col = 1; col <= row; col++) {
            printf("%c ", ch);
            ch++; // move to next alphabet
        }
        printf("\n"); // move to next line
    }

    return 0;
}

