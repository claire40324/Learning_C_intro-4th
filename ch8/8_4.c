// 8.4
#include <stdio.h>
#include <stdlib.h>

double square(double);
int main(void)
{
    printf("4.0的平方為：%1f", square(4.0));
    return 0;
}

double square(double x)
{
    int i, power = 1;
    for (i = 1; i <= 2; i++)
    {
        power *= x;
    }
}

/*   -----outcome-----

4.0的平方為：16.000000

*/
