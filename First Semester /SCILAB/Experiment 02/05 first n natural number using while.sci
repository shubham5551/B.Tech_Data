// To find  the sum of first n natural numbers, using while loop.
clc
clear
n = input("Enter the value of n: ");
sum = 0;
i = 1;

while i <= n
    sum = sum + i;
    i = i + 1;
end

disp("Sum of first " + string(n) + " natural numbers = " + string(sum));
