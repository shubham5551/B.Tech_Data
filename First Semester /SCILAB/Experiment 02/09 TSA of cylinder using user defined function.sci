// To find volume  and total surface area of a cylinder using user defined function


clc
clear

// Step 1: Create the function

function [vol, tsa] = cylinder(r, h)
    vol = %pi * r^2 * h;
    tsa = 2 * %pi * r * (r + h);
endfunction


// Step 2: Call the function
r = input("Enter radius of the cylinder: ");
h = input("Enter height of the cylinder: ");

[volume, surface_area] = cylinder(r, h);

disp("Volume of the cylinder = " + string(volume));
disp("Total Surface Area of the cylinder = " + string(surface_area));
