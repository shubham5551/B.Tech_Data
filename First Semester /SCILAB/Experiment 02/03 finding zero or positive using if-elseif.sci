// To find whether a real number entered by user is negative, zero or a positive using if- elseif-else-end command

clc
clear
n = input("Enter a real number: ");

if n < 0 then
    disp(string(n) + " is Negative");
elseif n == 0 then
    disp("The number is Zero");
else
    disp(string(n) + " is Positive");
end
