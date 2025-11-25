// To find first 20 terms of Fibonacci sequence using for loop

clc
clear

a = 0;
b = 1;

disp(a);
disp(b);

for i = 3:20
    c = a + b;
    disp(c);
    a = b;
    b = c;
end
