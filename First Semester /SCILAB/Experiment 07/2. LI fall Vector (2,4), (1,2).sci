// Clear screen and variables
clc;
clear;

// Define vectors
v1 = [2; 4];   // Vector (2,4)
v2 = [1; 2];   // Vector (1,2)

// Form matrix with vectors as columns
A = [v1 v2];

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

// -------- Plotting the vectors --------
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
title("Plot of Vectors (2,4) and (1,2)");

// Legend
legend("Vector (2,4)", "Vector (1,2)", "location", "upper_left");

// Equal scaling
axis([-1 5 -1 5], "equal");
