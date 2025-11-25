// To find volume and total surface area of a cylinder using input function.
clc
clear
// Taking input from user
r = input("Enter the radius of the cylinder: ");
h = input("Enter the height of the cylinder: ");

volume = %pi * r^2 * h;
tsa = 2 * %pi * r * (r + h);

disp("Volume of the cylinder = " + string(volume));
disp("Total Surface Area of the cylinder = " + string(tsa));
