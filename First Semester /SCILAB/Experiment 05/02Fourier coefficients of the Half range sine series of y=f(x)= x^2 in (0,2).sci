// To find the Fourier coefficients of the Half range sine series of y=f(x)= x^2   in (0,2)  and compare the graph of  the function and  the series.

// Half-range sine series for f(x) = x^2 on (0,2)
// Plots f(x) and the partial sum S_N(x)

clear;
clc;

// parameters
L = 2;
N = 40;                // number of terms in partial sum (try 20, 40, 100)
x = linspace(0, 2, 600); // fine grid on (0,2)
f = x.^2;

S = zeros(x); // partial sum initialized (vector same size as x)

for n = 1:N
    // coefficient b_n (closed form)
    bn = -8*(((-1)^n)*( %pi^2 * n^2 - 2) + 2 ) / ( %pi^3 * n^3 );
    // add term (vectorized)
    S = S + bn * sin( n * %pi * x / L );
end

// Plot
clf;
plot(x, f, 'LineWidth', 2); // original function
xlabel('x');
ylabel('y');
xtitle(['f(x)=x^2 and partial sum S_{' + string(N) + '}(x) on (0,2)']);
xgrid();
hold on;
plot(x, S, '--', 'LineWidth', 2);
legend(["x^2", "Partial sum S_N(x)"], 'location', 'upper left');
hold off;

// Also show error (optional)
figure();
plot(x, abs(f - S), 'LineWidth', 2);
xlabel('x');
ylabel('absolute error');
xtitle(['Absolute error |x^2 - S_N(x)|, N = ' + string(N)]);
xgrid();
