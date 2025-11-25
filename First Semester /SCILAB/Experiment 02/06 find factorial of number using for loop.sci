// To find factorial of a number using  for loop.
clc
clear

n = input("Enter a number: ");
fact = 1;

for i = 1:n
    fact = fact * i;
end

disp("Factorial of " + string(n) + " = " + string(fact));
