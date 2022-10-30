// 8.23
#include <stdio.h>
#include <stdlib.h>

int f(int);

void main(void)
{
    printf("f(5) = %d", f(5));
}

int f(int n)
{
    if (n == 0)
        return 3;
    else
        return (2 * f(n - 1) - 5);
}

/*   -----outcome-----

f(5) = -59

*/