// 8.15
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fac(int);
double my_fun(double, int);

int main(void)
{
    int i = 1;
    while (i <= 10)  
    {
        printf("my_fun(2.2,%d) = %lf\n", i, my_fun(2.2, i));
        i++;
    }
    /*另一種方法
    while (my_fun(2.2, i)- my_fun(2.2, i-1)> 0.0001 || my_fun(2.2, i)- my_fun(2.2, i-1) < -0.0001 )
    {
        i++;
    }
    */
    return 0;
}

double my_fun(double x, int n)
{
    int i;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += (pow(-1, i) * pow(x, 2 * i + 1)) / fac(2 * i + 1);
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

由此可知當 n＝ 6 時,差值才會小於0.0001
my_fun(2.2, 1) = -1.774667
my_fun(2.2, 2) = -1.345197
my_fun(2.2, 3) = -1.394689
my_fun(2.2, 4) = -1.391362
my_fun(2.2, 5) = -1.391508
my_fun(2.2, 6) = -1.391503
my_fun(2.2, 7) = -1.391504
my_fun(2.2, 8) = -1.391504
my_fun(2.2, 9) = -1.391504
my_fun(2.2, 10) = -1.391504

*/
