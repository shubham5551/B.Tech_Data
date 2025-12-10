// To find the Fourier  coefficients of the Half range sine series of y=f(x)= x   in (0, pi)  and compare the graph of  the function and  the series.

// Half-range sine series for f(x) = x on (0, pi)
// Compare f(x)=x with partial sine series S_N(x)

clear;
clc;

N = 60;                      // number of terms in partial sum (try 10, 60, 200)
x = linspace(0, %pi, 800)';  // column vector grid on [0, pi]
f = x;                       // original function f(x) = x

S = zeros(x);                // initialize partial sum (same size as x)

for n = 1:N
    // bn = 2 * (-1)^(n+1) / n
    bn = 2 * (-1)^(n+1) / n;
    S = S + bn * sin(n * x);
end

// Plot f and series
clf;
plot(x, f, 'LineWidth', 2);
xlabel("x");
ylabel("y");
xtitle("f(x)=x and partial sum of half-range sine series (0, pi)");
xgrid();
hold on;
plot(x, S, '--', 'LineWidth', 2);
legend(["x", "Partial sum S_N(x)"], "location", "northwest");
hold off;

// Plot absolute error
figure();
plot(x, abs(f - S), 'LineWidth', 2);
xlabel("x");
ylabel("Absolute error");
xtitle("Absolute error |x - S_N(x)|");
xgrid();
