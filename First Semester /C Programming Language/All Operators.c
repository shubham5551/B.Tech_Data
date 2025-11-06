#include <stdio.h>

int main() {
    int a = 10, b = 5, c;

    // 1. Arithmetic Operators
    printf("----- Arithmetic Operators -----\n");
    c = a + b;    // Addition
    printf("a + b = %d\n", c);

    c = a - b;    // Subtraction
    printf("a - b = %d\n", c);

    c = a * b;    // Multiplication
    printf("a * b = %d\n", c);

    c = a / b;    // Division (integer division)
    printf("a / b = %d\n", c);

    c = a % b;    // Modulus (remainder)
    printf("a %% b = %d\n", c);
    
    c = a % b;    // Positive value print
    printf("+a = %d\n", +a);
    
    c = a % b;    // Negative value print
    printf("-a = %d\n", -a);
    
    c = a % b;    // Increment
    printf("a++ = %d\n", a++);
    
    c = a % b;    // Decrement
    printf("a-- = %d\n\n", a--);


    // 2. Relational Operators
    printf("----- Relational Operators -----\n");
    printf("a == b : %d\n", a == b);   // Equal to
    printf("a != b : %d\n", a != b);   // Not equal to
    printf("a > b  : %d\n", a > b);    // Greater than
    printf("a < b  : %d\n", a < b);    // Less than
    printf("a >= b : %d\n", a >= b);   // Greater than or equal to
    printf("a <= b : %d\n\n", a <= b); // Less than or equal to


    // 3. Logical Operators
    printf("----- Logical Operators -----\n");
    printf("(a > b) && (b < 20) : %d\n", (a > b) && (b < 20));  // Logical AND
    printf("(a > b) || (b > 20) : %d\n", (a > b) || (b > 20));  // Logical OR
    printf("!(a == b)           : %d\n\n", !(a == b));          // Logical NOT


    // 4. Assignment Operators
    printf("----- Assignment Operators -----\n");
    c = a;       // Assign value of a to c
    printf("c = %d\n", c);

    c += b;      // c = c + b
    printf("c += b => %d\n", c);

    c -= b;      // c = c - b
    printf("c -= b => %d\n", c);

    c *= b;      // c = c * b
    printf("c *= b => %d\n", c);

    c /= b;      // c = c / b
    printf("c /= b => %d\n", c);

    c %= b;      // c = c % b
    printf("c %%= b => %d\n\n", c);


    // 5. Increment and Decrement Operators
    printf("----- Increment and Decrement Operators -----\n");
    c = a;
    printf("Initial value of c: %d\n", c);
    printf("c++ (Post-increment) => %d\n", c++);  // Use c, then increment
    printf("Now c = %d\n", c);
    printf("++c (Pre-increment)  => %d\n", ++c);  // Increment, then use
    printf("c-- (Post-decrement) => %d\n", c--);  // Use c, then decrement
    printf("--c (Pre-decrement)  => %d\n\n", --c); // Decrement, then use


    // 6. Bitwise Operators
    printf("----- Bitwise Operators -----\n");
    printf("a & b (AND)  = %d\n", a & b);  // Bitwise AND
    printf("a | b (OR)   = %d\n", a | b);  // Bitwise OR
    printf("a ^ b (XOR)  = %d\n", a ^ b);  // Bitwise XOR
    printf("~a (NOT)     = %d\n", ~a);     // Bitwise NOT (1's complement)
    printf("a << 1 (Left shift)  = %d\n", a << 1);  // Left shift by 1
    printf("a >> 1 (Right shift) = %d\n\n", a >> 1); // Right shift by 1


    // 7. Conditional (Ternary) Operator
    printf("----- Conditional (Ternary) Operator -----\n");
    c = (a > b) ? a : b;   // If condition true ? a, else ? b
    printf("Greater number = %d\n\n", c);


    // 8. sizeof Operator
    printf("----- sizeof Operator -----\n");
    printf("Size of int : %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n\n", sizeof(double));


    // 9. Comma Operator
    printf("----- Comma Operator -----\n");
    int x = (a = 3, b = 5, a + b);  // Last expression (a + b) is returned
    printf("Result of comma operator: %d\n", x);

    return 0;
}

