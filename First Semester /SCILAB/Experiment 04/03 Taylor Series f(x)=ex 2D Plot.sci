// To  compare the function f(x)=ex and its Taylor series expansion about origin  by using  2d plots

clc;
clear;

// Objective: Compare f(x) = e^x and its Taylor series about origin
// using 2D plots

// Define x-range for plotting (you can change -2:0.1:2 to other range)
x = -2:0.1:2;

// True function values
y_true = exp(x);

// Ask user for number of terms in Taylor series
n = input("Enter number of terms in Taylor series: ");

// Initialize Taylor series approximation vector
y_series = 0 * x;   // same size as x, all zeros

// Compute Taylor series: sum_{k=0}^n x^k / k!
for k = 0:n
    y_series = y_series + (x.^k) / factorial(k);
end

// Plot both curves
clf();
plot(x, y_true, x, y_series);
legend("f(x) = exp(x)", "Taylor Series Approximation");
xlabel("x");
ylabel("y");
title("Comparison of e^x and its Taylor Series (Maclaurin)");

// Optional: add grid
xgrid();
