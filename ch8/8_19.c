// 8.19
#include <stdio.h>
#include <stdlib.h>
double rpower(double, int);
int main()
{
    printf("2.0 ^ 3 = %1f", rpower(2.0, 3));
    return 0;
}

double rpower(double b, int n)
{
    if (n == 1)
    {
        return b;
    }
    else
    {
        return b * rpower(b, n - 1);
    }
}

/*   -----outcome-----

2.0 ^ 3 = 8.000000

*/