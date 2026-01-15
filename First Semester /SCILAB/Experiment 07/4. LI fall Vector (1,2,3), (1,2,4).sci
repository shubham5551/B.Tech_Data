
// Clear screen and variables
clc;
clear;

// Define vectors
v1 = [1; 2; 3];   // Vector (1,2,3)
v2 = [1; 2; 4];   // Vector (1,2,4)

// Form matrix with vectors as columns
A = [v1 v2];

// Display matrix
disp("Matrix formed by vectors:");
disp(A);

// Check Linear Independence using rank
r = rank(A);

if r == size(A, 2) then
    disp("The given vectors are LINEARLY INDEPENDENT");
else
    disp("The given vectors are LINEARLY DEPENDENT");
end

// -------- 3D Plotting of vectors --------
clf;

// Origin
O = [0; 0; 0];

// Plot vector v1
plot3d([O(1) v1(1)], [O(2) v1(2)], [O(3) v1(3)]);
// Plot vector v2
plot3d([O(1) v2(1)], [O(2) v2(2)], [O(3) v2(3)]);

// Labels and title
xlabel("X-axis");
ylabel("Y-axis");
zlabel("Z-axis");
title("3D Plot of Vectors (1,2,3) and (1,2,4)");

// Enable grid
xgrid();
