// Newton Raphson for x^3 - x - 5 = 0
clc 
clear
function y = f(x)
    y = x^3 - x - 5;
endfunction

function dy = df(x)
    dy = 3*x^2 - 1;
endfunction

x = 2; // initial guess
tol = 1e-6;
error = 1;

while error > tol
    x_new = x - f(x)/df(x);
    error = abs(x_new - x);
    x = x_new;
end

disp("Root of x^3 - x - 5 = " + string(x));
