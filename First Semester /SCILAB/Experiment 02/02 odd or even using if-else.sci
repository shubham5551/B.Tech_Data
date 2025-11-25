// To find whether an integer entered by user is odd or even, using if- else-end command.
clc
clear
n = input("Enter an integer: ");

if modulo(n,2) == 0 then
    disp(string(n) + " is Even");
else
    disp(string(n) + " is Odd");
end
