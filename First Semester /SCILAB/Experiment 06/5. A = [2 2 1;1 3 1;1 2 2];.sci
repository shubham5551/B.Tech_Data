// Clear screen and variables
clc;
clear;

// Define the matrix A
A = [2 2 1;1 3 1;1 2 2];

disp("Matrix A:");
disp(A);

// Find transpose of A
AT = A';

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
// Check Orthogonal
// A * A' = I
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
