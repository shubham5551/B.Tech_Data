// 2.4- Create two matrices( two dimensional arrays)A and B  such that the following  operations are defined and hence : 
// (i) 3A-ABT
clc;
A = [1,2;3 4];
B = [5 6;7,8];
n= [3*A-A*B'];
disp(n);
