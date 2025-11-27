// To  compare the function f(x)=sinx and its Taylor series expansion about origin by using  2d plots

clc;
clear;

// Objective: Compare sin(x) with its Taylor series using 2D plots

// Define x-range for plotting (change if needed)
x = -3:0.1:3;

// Exact function values
y_true = sin(x);

// Get number of terms for Taylor series
n = input("Enter number of terms in Taylor series: ");

// Initialize approximation vector same size as x
y_series = zeros(x);

// Compute Taylor Series: sum((-1)^k * x^(2k+1)/(2k+1)!)
for k = 0:(n-1)
    y_series = y_series + ((-1)^k) * (x.^(2*k+1)) / factorial(2*k+1);
end

// Plot exact and approximation curve
clf();
plot(x, y_true, 'LineWidth', 2);
plot(x, y_series, '--', 'LineWidth', 2);

// Add labels and legend
legend("f(x) = sin(x)", "Taylor Series Approximation");
xlabel("x");
ylabel("y");
title("Comparison of sin(x) and its Taylor Series (Maclaurin Expansion)");
xgrid();
