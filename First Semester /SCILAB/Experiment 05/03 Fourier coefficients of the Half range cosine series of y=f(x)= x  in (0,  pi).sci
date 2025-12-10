// To find the Fourier coefficients of the Half range cosine series of y=f(x)= x  in (0,  pi)  and compare the graph of  the function and  the series.

// Half-range cosine series for f(x) = x on (0, pi)

clear;
clc;

L = %pi;
N = 80;                    // number of terms
x = linspace(0, %pi, 600)';
f = x;                     // original function

// A0/2 term
S = ones(x) * (%pi / 2);

// Add cosine terms
for n = 1:N
    // Scilab uses modulo(), NOT mod()
    if modulo(n, 2) == 0 then
        An = 0;            // even n → coefficient = 0
    else
        An = -4 / (%pi * n^2); // odd n → formula
    end
    
    S = S + An * cos(n * x);
end

// Plot function and partial sum
clf;
plot(x, f, 'LineWidth', 2);
xlabel("x");
ylabel("y");
xtitle("f(x)=x and Half-Range Cosine Series Approximation");
xgrid();
hold on;
plot(x, S, '--', 'LineWidth', 2);
legend(["x", "Series S_N(x)"], "location", "northwest");
hold off;

// Plot error
figure();
plot(x, abs(f - S), 'LineWidth', 2);
xlabel("x");
ylabel("Absolute Error");
xtitle("Error |x - S_N(x)|");
xgrid();
