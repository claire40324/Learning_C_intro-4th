// 8.21
#include <stdio.h>
#include <stdlib.h>

int sum2(int);
int main()
{
    printf("sum2(5) = %d", sum2(5));
    return 0;
}
int sum2(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return 2 * n + sum2(n - 1);
    }
}

/*   -----outcome-----

sum2(5) = 30

*/