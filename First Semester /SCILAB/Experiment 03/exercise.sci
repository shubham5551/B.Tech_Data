clc
clear
disp("Newton-Raphson Method")
deff('d=f(x)','d=x^3-17')
deff('diff=df(x)','diff=3*x^2')
x0= input('Enter intial guess x0: ')
err=input('Enter the allowed error: ')
n=input('Enter the number of iterations n\n: ')
printf('%5s  %10s\n','i','x0')
//printf('i','x0')

for i=1:n
    h=f(x0)/df(x0);
    x1=x0-h;
    x0=x1;
    printf('%5i  %10.6f\n',i,x0)
    if (abs(h)<err) then
        printf('\nWe got the desired accuracy')
        break;
    end
end
