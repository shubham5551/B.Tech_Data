
// Clear screen and variables
clc;
clear;

// Define vectors
v1 = [1; 1];   // Vector (1,1)
v2 = [1; 3];   // Vector (1,3)
v3 = [2; 5];   // Vector (2,5)

// Form matrix with vectors as columns
A = [v1 v2 v3];

// Display matrix
disp("Matrix formed by vectors:");
disp(A);

// Check Linear Independence
[m, n] = size(A);

if n > m then
    disp("Number of vectors > dimension of space");
    disp("Hence, vectors are LINEARLY DEPENDENT");
else
    if det(A) <> 0 then
        disp("Vectors are LINEARLY INDEPENDENT");
    else
        disp("Vectors are LINEARLY DEPENDENT");
    end
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

// Plot vector v3
plot([0 v3(1)], [0 v3(2)], 'g', 'LineWidth', 2);
plot(v3(1), v3(2), 'go');

// Labels and title
xlabel("X-axis");
ylabel("Y-axis");
title("Plot of Vectors (1,1), (1,3), (2,5)");

// Legend
legend("(1,1)", "(1,3)", "(2,5)", "location", "upper_left");

// Equal axis scaling
axis([-1 6 -1 6], "equal");
