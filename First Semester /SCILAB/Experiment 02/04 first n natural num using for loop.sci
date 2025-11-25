// To find  the sum of first n natural numbers, using for loop.

clc
clear

n = input("Enter the value of n: ");
sum = 0;

for i = 1:n
    sum = sum + i;
end

disp("Sum of first " + string(n) + " natural numbers = " + string(sum));
