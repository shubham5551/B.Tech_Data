// Write a script file to find eigen values and eigen vectors X of a matrix A=(aij)nxn and determine whether it is diagonalisable. And then find the diagonal matrix D
clc;
clear;

// Given matrix A
A = [2 2 1;1 3 1;1 2 2];

// Order of matrix
n = size(A,1);

// Eigenvalues and Eigenvectors
[X, D] = spec(A);

// Display Eigenvectors
disp("Eigen Vector Matrix X = ");
disp(X);

// Display Diagonal Matrix
disp("Diagonal Matrix D = ");
disp(D);

// Check diagonalizability
if rank(X) == n then
    disp("Matrix A is DIAGONALIZABLE");
else
    disp("Matrix A is NOT diagonalizable");
end
