// Newton Raphson for e^x = 2 - x^2
clc
clear
function y = f(x)
    y = exp(x) + x^2 - 2;
endfunction

function dy = df(x)
    dy = exp(x) + 2*x;
endfunction

x = 0; // initial guess
tol = 1e-6;
error = 1;

while error > tol
    x_new = x - f(x)/df(x);
    error = abs(x_new - x);
    x = x_new;
end

disp("Root of e^x = 2 - x^2 is = " + string(x));
