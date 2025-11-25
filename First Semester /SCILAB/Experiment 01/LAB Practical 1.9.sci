// 6. Find the roots of following polynomials:

clc;      // Clear command window
clear;    // Clear all variables
close;    // Close all figure windows

// (i) x^2 - x - 2 = 0
disp("Finding roots of x^2 - x - 2 = 0");
coeff1 = [1 -1 -2];     // Coefficients of the polynomial
roots1 = roots(coeff1); // Find roots
disp("Roots of x^2 - x - 2 are:", roots1 );

// (ii) x^3 + 1 = 0
disp("Finding roots of x^3 + 1 = 0");
coeff2 = [1 0 0 1];     // Coefficients of the polynomial
roots2 = roots(coeff2); // Find roots
disp("Roots of x^3 + 1 are:",roots2 );
