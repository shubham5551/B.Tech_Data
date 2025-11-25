// To find factorial of a number using while loop.
clc
clear
n = input("Enter a number: ");
fact = 1;
i = 1;

while i <= n
    fact = fact * i;
    i = i + 1;
end

disp("Factorial of " + string(n) + " = " + string(fact));
