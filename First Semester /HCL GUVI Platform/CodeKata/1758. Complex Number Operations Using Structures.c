#include <stdio.h>

typedef struct {
    float real;
    float imag;
} ComplexNumber;

ComplexNumber add(ComplexNumber a, ComplexNumber b) {
    ComplexNumber res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

ComplexNumber subtract(ComplexNumber a, ComplexNumber b) {
    ComplexNumber res;
    res.real = a.real - b.real;
    res.imag = a.imag - b.imag;
    return res;
}

ComplexNumber multiply(ComplexNumber a, ComplexNumber b) {
    ComplexNumber res;
    res.real = a.real * b.real - a.imag * b.imag;
    res.imag = a.real * b.imag + a.imag * b.real;
    return res;
}

ComplexNumber divide(ComplexNumber a, ComplexNumber b) {
    ComplexNumber res;
    float denom = b.real * b.real + b.imag * b.imag;

    res.real = (a.real * b.real + a.imag * b.imag) / denom;
    res.imag = (a.imag * b.real - a.real * b.imag) / denom;

    return res;
}

int main() {
    ComplexNumber c1, c2;

    scanf("%f %f", &c1.real, &c1.imag);
    scanf("%f %f", &c2.real, &c2.imag);

    ComplexNumber sum = add(c1, c2);
    ComplexNumber diff = subtract(c1, c2);
    ComplexNumber prod = multiply(c1, c2);
    ComplexNumber quot = divide(c1, c2);

    printf("Addition: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Subtraction: %.2f + %.2fi\n", diff.real, diff.imag);
    printf("Multiplication: %.2f + %.2fi\n", prod.real, prod.imag);

    if (quot.imag >= 0)
        printf("Division: %.2f + %.2fi\n", quot.real, quot.imag);
    else
        printf("Division: %.2f - %.2fi\n", quot.real, -quot.imag);

    return 0;
}
