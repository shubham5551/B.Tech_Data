//To find the error in estimating the value of function f(x)=sinx at x=pi/2 using its Taylor series expansion about origin.
     
clc;
clear;

// Function: f(x) = sin(x)
// Objective: To find the error in estimating sin(x) at x = pi/2
// using Taylor series expansion about origin (Maclaurin series)

x = %pi / 2;    // Point at which value is estimated (pi/2)

// Input: number of terms in the Taylor series
n = input("Enter number of terms in Taylor series: ");

// Taylor approximation of sin(x)
y_est = 0;

for k = 0:(n-1)
    term = ((-1)^k) * (x^(2*k + 1)) / factorial(2*k + 1);
    y_est = y_est + term;
end

// True value using Scilab's sin() function
y_true = sin(x);

// Error calculations
abs_error = abs(y_true - y_est);
rel_error = abs_error / y_true;

disp("--------------------------------------------------");
disp(" Estimation of sin(x) using Taylor Series Method");
disp("--------------------------------------------------");
disp("Value of x = "); disp(x);
disp("Number of terms n = "); disp(n);

disp("Estimated value (Taylor series) = "); disp(y_est);
disp("True value sin(x) = "); disp(y_true);
disp("Absolute Error = "); disp(abs_error);
disp("Relative Error = "); disp(rel_error);
disp("--------------------------------------------------");
