// 8.14(a)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fac(int num)
{
    int i, sum = 1;
    for (i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}

double my_fun1(double x, int n)
{
    int i;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += pow(x, i) / fac(i);
    }
    return sum;
}
int main(void)
{
    float x = 0.1, x1 = 0.2;
    int n2 = 8, n = 5;
    printf("my_fun(%0.1f, %d) = %lf\n", x, n, my_fun1(x, n));
    printf("my_fun(%0.1f, %d) = %lf\n", x, n2, my_fun1(x, n2));
    printf("my_fun(%0.1f, %d) = %lf\n", x1, n2, my_fun1(x1, n2));
    return 0;
}

/*   -----outcome-----

my_fun(0.1, 5) = 0.105171
my_fun(0.1, 8) = 0.105171
my_fun(0.2, 8) = 0.221403

*/
