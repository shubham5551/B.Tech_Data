// Clear screen and variables
clc;
clear;

// Define vectors
v1 = [1; 2; 3];    // Vector (1,2,3)
v2 = [1; 2; 4];    // Vector (1,2,4)
v3 = [0; 0; 0];    // Zero vector (0,0,0)

// Form matrix using vectors as columns
A = [v1 v2 v3];

// Display matrix
disp("Matrix formed by vectors:");
disp(A);

// Check Linear Independence using rank
r = rank(A);
n = size(A, 2);

if r == n then
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

// Zero vector (shown as origin point)
plot3d(0, 0, 0, 'ro');

// Labels and title
xlabel("X-axis");
ylabel("Y-axis");
zlabel("Z-axis");
title("3D Plot of Vectors (1,2,3), (1,2,4) and Zero Vector");

// Grid
xgrid();
