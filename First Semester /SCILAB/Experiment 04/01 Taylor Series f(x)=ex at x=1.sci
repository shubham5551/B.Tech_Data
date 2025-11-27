// To find the error in estimating the value of function f(x)=ex at x=1 using its Taylor series expansion about origin.

clc;
clear;

// Function: f(x) = e^x
// Objective: Estimate e^x at x = 1 using Taylor series (Maclaurin series)

x = 1;
n = input("Enter number of terms in Taylor series: ");

y_est = 0;

for k = 0:n
    y_est = y_est + (x^k) / factorial(k);
end

y_true = exp(x);

abs_error = abs(y_true - y_est);
rel_error = abs_error / y_true;

disp("--------------------------------------------------");
disp(" Estimation of e^x using Taylor Series Method");
disp("--------------------------------------------------");
disp("Value of x = "); disp(x);
disp("Number of terms n = "); disp(n);

disp("Estimated value (Taylor series) = "); disp(y_est);
disp("True value exp(x) = "); disp(y_true);
disp("Absolute Error = "); disp(abs_error);
disp("Relative Error = "); disp(rel_error);
disp("--------------------------------------------------");
