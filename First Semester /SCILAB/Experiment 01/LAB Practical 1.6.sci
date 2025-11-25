// 2.3- Create two row vectors (one dimensional arrays) a and b such that the following operations are defined and hence find :
clc;
a = [1,2,3];
b = [4,5,6];

// (i) 2a-3b
oneD = [2*a-3*b];
disp(oneD);
// (ii)2(transpose a)-3(transpose b)
oneD1 = [2*a'-3*b'];
disp(oneD1);
