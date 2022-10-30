// 8.3
#include <stdio.h>
#include <stdlib.h>

int cub(int x)
{
    int i, sum = 1;
    for (i = 1; i <= 3; i++)
        sum *= x;
    printf("%d的三次方：%d", x, sum);
}

int main(void)
{
    cub(2);
    return 0;
}

/*   -----outcome-----

2的三次方：8

*/

