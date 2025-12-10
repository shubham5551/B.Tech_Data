// To find the Fourier  coefficients of the Half range cosine series of y=f(x)= x^2   in (0,2)  and compare the graph of  the function and  the series.

clc;
clear;

// Half-range cosine series of f(x) = x^2 on (0, 2)
// and comparison of function and series using 2D plots

L = 2;       // Interval (0, L)

// x-range for plotting
x = 0:0.01:L;

// Original function f(x) = x^2
f = x.^2;

// Number of terms in cosine series
N = input("Enter number of terms N in the cosine series: ");

// a0 / 2 term (already derived: a0 = 8/3 -> a0/2 = 4/3)
a0_over_2 = 4/3;

// Initialize series with a0/2
y_series = a0_over_2 * ones(x);

// To store coefficients (optional)
a = zeros(1, N);

// Build Fourier cosine series:
// x^2 ≈ 4/3 + Σ (16*(-1)^n / (π^2 n^2)) * cos(nπx/2)
for n = 1:N
    a(n) = 16 * ((-1)^n) / (%pi^2 * n^2);
    y_series = y_series + a(n) * cos(n * %pi * x / L);
end

// Show coefficients (optional)
disp("Fourier cosine coefficients a_n:");
disp(a);

// Plot original function and series
clf();
plot(x, f);          // f(x) = x^2
plot(x, y_series);   // Fourier series

legend("f(x) = x^2", "Half-range cosine series");
xlabel("x");
ylabel("y");
title("Half-range cosine series of f(x) = x^2 on (0, 2)");
xgrid();
