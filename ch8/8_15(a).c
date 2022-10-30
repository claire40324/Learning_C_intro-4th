// 8.15
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fac(int);
double my_fun(double x, int n);
int main(void)
{
    printf("my_fun(2.2, 3) = %lf \n", my_fun(2.2, 3));
    printf("my_fun(2.2, 5) = %lf \n", my_fun(2.2, 5));
    return 0;
}

double my_fun(double x, int n)
{
    int i;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += pow(-1, i) * pow(x, 2 * i + 1) / fac(2 * i + 1);
    }
    return sum;
}

double fac(int x)
{
    int i;
    double power = 1;
    for (i = 1; i <= x; i++)
    {
        power *= i;
    }
    return power;
}

/*   -----outcome-----

my_fun(2.2, 3) = -1.394689 
my_fun(2.2, 5) = -1.391508 

*/
