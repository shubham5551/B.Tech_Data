// Clear previous data
clc;
clear;

// Define the vectors
v1 = [0; 1];   // Vector (0,1)
v2 = [1; 0];   // Vector (1,0)

// Form a matrix using vectors as columns
A = [v1 v2];

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

// -------- Plotting the vectors --------

// Create a new figure
clf;
xgrid();

// Plot vector v1
plot([0 v1(1)], [0 v1(2)], 'r', 'LineWidth', 2);
plot(v1(1), v1(2), 'ro');

// Plot vector v2
plot([0 v2(1)], [0 v2(2)], 'b', 'LineWidth', 2);
plot(v2(1), v2(2), 'bo');

// Labels and title
xlabel("X-axis");
ylabel("Y-axis");
title("Plot of Vectors (0,1) and (1,0)");

// Legend
legend("Vector (0,1)", "Vector (1,0)", "location", "upper_left");

// Set axis equal
axis([-1 2 -1 2], "equal");
