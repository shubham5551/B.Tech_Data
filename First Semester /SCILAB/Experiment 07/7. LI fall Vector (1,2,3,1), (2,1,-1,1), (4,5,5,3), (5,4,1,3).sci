
// Clear screen and variables
clc;
clear;

// Define vectors
v1 = [1; 2; 3; 1];      // (1,2,3,1)
v2 = [2; 1; -1; 1];     // (2,1,-1,1)
v3 = [4; 5; 5; 3];      // (4,5,5,3)
v4 = [5; 4; 1; 3];      // (5,4,1,3)

// Form matrix using vectors as columns
A = [v1 v2 v3 v4];

// Display matrix
disp("Matrix formed by vectors:");
disp(A);

// Calculate determinant
d = det(A);

// Check Linear Independence
if d <> 0 then
    disp("The given vectors are LINEARLY INDEPENDENT");
else
    disp("The given vectors are LINEARLY DEPENDENT");
end

// Rank check (additional confirmation)
r = rank(A);
disp("Rank of matrix = ");
disp(r);
