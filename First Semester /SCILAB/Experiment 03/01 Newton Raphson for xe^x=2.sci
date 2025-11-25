// Newton Raphson for x*e^x = 2

function y = f(x)
    y = x*exp(x) - 2;
endfunction

function dy = df(x)
    dy = exp(x)*(1 + x);
endfunction

x = 1; // initial guess
tol = 1e-6;
error = 1;

while error > tol
    x_new = x - f(x)/df(x);
    error = abs(x_new - x);
    x = x_new;
end

disp("Root of x*e^x = 2 is = " + string(x));
