// Clear screen and variables
clc;
clear;

// Define imaginary unit
i = %i;

// Define the matrix A
A = [i, 2 - 3*i;-2 + 3*i, 0];

disp("Matrix A:");
disp(A);

// Transpose of A
AT = A';

// Conjugate transpose (Hermitian transpose)
AH = A';

// ----------------------------
// Check Symmetric
// ----------------------------
if A == AT then
    disp("Matrix A is SYMMETRIC");
else
    disp("Matrix A is NOT symmetric");
end

// ----------------------------
// Check Skew-Symmetric
// ----------------------------
if A == -AT then
    disp("Matrix A is SKEW-SYMMETRIC");
else
    disp("Matrix A is NOT skew-symmetric");
end

// ----------------------------
// Check Orthogonal (Real matrices only)
// ----------------------------
I = eye(A * AT);

if A * AT == I then
    disp("Matrix A is ORTHOGONAL");
else
    disp("Matrix A is NOT orthogonal");
end

// ----------------------------
// Eigenvalues and Eigenvectors
// ----------------------------
[Evec, Eval] = spec(A);

disp("Eigenvalues:");
disp(diag(Eval));

disp("Eigenvectors:");
disp(Evec);
