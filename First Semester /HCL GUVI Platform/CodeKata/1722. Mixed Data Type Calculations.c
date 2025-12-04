#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
    {
        int a;
        float b;
        char op;
        double c;
        double result;
        scanf("%d %f %c %lf", &a, &b, &op, &c);
        switch(op) 
        {
            case '+':
                result = a + b + c;
                break;
            case '-':
                result = a - b + c;
                break;
            case '*':
                result = a * b + c;
                break;
            case '/':
                if (b == 0)
                    result = a + c;
                else
                    result = (a / b) + c;
                break;
            default:
                continue;
        }

        printf("%.2lf\n", result);
    }

    return 0;
}
