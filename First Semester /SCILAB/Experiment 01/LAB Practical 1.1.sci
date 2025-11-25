// To write a Scilab code to find the solution of following problems:
// 1. Evaluate:
clc; // for clear past outputs
// (i)  27^(1/3)+ 32^(0.2)
a = 27^(1/3)+ 32^(0.2);
disp(a);

// (ii)root64+ePower4
b = sqrt(64) + (%e^4);
disp(b);

// (iii)sin(pi/6)+cos60
c = sin(%pi/6) + cos(60*%pi/180);
disp(c);
// (iv) 4!+ln2+log100
d  = factorial(4)+log(2)+log10(100); 
disp(d);

// (v) (2+3i)(4+5i)
e = 2+3*%i;
f = 4+5*%i;
g = f*e;
disp(g);
