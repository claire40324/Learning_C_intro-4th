//8.13(b)

#include <stdio.h>
#include <stdlib.h>

int fac(int);
double my_fun(int);

int main()
{
    int i = 1;
    while (i <= 15)
    {
        printf("my_fun(%d) = %lf\n", i, my_fun(i));
        i++;
    }
    return 0;
}

double my_fun(int n)
{
    int i;
    double sum = 0, j = 1;
    for (i = 1; i <= n; i++)
    {
        sum += j / fac(i);
    }
    return sum;
}

int fac(int n)
{
    int i = 1, factorial = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    return factorial;
}

/*   -----outcome-----

可知當n至少要9時,差值才會小於0.00001
my_fun(1) = 1.000000
my_fun(2) = 1.500000
my_fun(3) = 1.666667
my_fun(4) = 1.708333
my_fun(5) = 1.716667
my_fun(6) = 1.718056
my_fun(7) = 1.718254
my_fun(8) = 1.718279
my_fun(9) = 1.718282
my_fun(10) = 1.718282
my_fun(11) = 1.718282
my_fun(12) = 1.718282
my_fun(13) = 1.718282
my_fun(14) = 1.718282
my_fun(15) = 1.718282

*/
