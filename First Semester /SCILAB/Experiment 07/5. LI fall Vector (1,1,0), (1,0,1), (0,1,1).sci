
// Clear screen and variables
clc;
clear;

// Define vectors
v1 = [1; 1; 0];   // Vector (1,1,0)
v2 = [1; 0; 1];   // Vector (1,0,1)
v3 = [0; 1; 1];   // Vector (0,1,1)

// Form matrix with vectors as columns
A = [v1 v2 v3];

// Display the matrix
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

// -------- 3D Plotting --------
clf;

// Origin
O = [0; 0; 0];

// Plot vector v1
plot3d([O(1) v1(1)], [O(2) v1(2)], [O(3) v1(3)]);

// Plot vector v2
plot3d([O(1) v2(1)], [O(2) v2(2)], [O(3) v2(3)]);

// Plot vector v3
plot3d([O(1) v3(1)], [O(2) v3(2)], [O(3) v3(3)]);

// Labels and title
xlabel("X-axis");
ylabel("Y-axis");
zlabel("Z-axis");
title("3D Plot of Vectors (1,1,0), (1,0,1), (0,1,1)");

// Grid
xgrid();
