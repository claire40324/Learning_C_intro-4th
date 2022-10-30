// 8.8

#include <stdio.h>
#include <stdlib.h>

double f(double);
int main()
{
    printf("f(-3.2) = %lf\n", f(-3.2));
    printf("f(-2.1) = %lf\n", f(-2.1));
    printf("f(0) = %lf\n", f(0));
    printf("f(2.1) = %lf\n", f(2.1));
    return 0;
}

double f(double x)
{
    int i;
    double power = 1;
    double sum = 0;
    for (i = 1; i <= 3; i++)
    {
        power *= x;
    }
    sum = (power * 3) + (2 * x) - 1;
    return sum;
}

/*   -----outcome-----

Suppose a function f(x) = 3x^3 + 2x -1 
f(-3.2) = -105.704000
f(-2.1) = -32.983000
f(0) = -1.000000
f(2.1) = 30.983000

*/
