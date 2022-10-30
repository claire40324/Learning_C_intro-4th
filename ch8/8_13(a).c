//8.13(a)

#include <stdio.h>
#include <stdlib.h>

int fac(int);
double my_fun(int);

int main()
{
    printf("my_fun(5) = %lf\n", my_fun(5));
    printf("my_fun(8) = %lf\n", my_fun(8));
    printf("my_fun(10) = %lf\n", my_fun(10));
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

my_fun(5) = 1.716667
my_fun(8) = 1.718279
my_fun(10) = 1.718282

*/
