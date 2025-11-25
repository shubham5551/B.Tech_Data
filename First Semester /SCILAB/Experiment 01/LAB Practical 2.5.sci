// 2.5- Create a matrix A so that the following operations are defined and find:
// (i) determinant of A
clc;
A = [1 2;3 4];
D = det(A);
disp(D);

// (ii) Inverse of A
clc;
A = [1 2;3 4];
D = inv(A);
disp(D);

// (iii) product of A and inverse of A
clc;
A = [1 2;3 4];
product = A* inv(A);
disp(product);
