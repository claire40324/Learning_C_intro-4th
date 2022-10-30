// 8.14(b)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fac(int);
double my_fun(double, int);

int main(void)
{
    int n = 1;
    while (n <= 8)
    {
       printf("my_fun(%d) = %lf\n", n, my_fun(0.1, n));
        n++;
    }
    return 0;
}

int fac(int num)
{
    int i, sum = 1;
    int n = 2;
    for (i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}

double my_fun(double x, int n)
{
    int i;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += pow(x, i) / fac(i);
    }
    return sum;
}

/*   -----outcome-----

由此可知當n值為4時,my_fun1(0.1, n) - my_fun1(0.1, n - 1)的差值會小於0.00001
my_fun(1) = 0.100000
my_fun(2) = 0.105000
my_fun(3) = 0.105167
my_fun(4) = 0.105171
my_fun(5) = 0.105171
my_fun(6) = 0.105171
my_fun(7) = 0.105171
my_fun(8) = 0.105171

*/
