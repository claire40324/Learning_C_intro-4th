// 8.6
#include <stdio.h>
#include <stdlib.h>

int power(int, int);
int main(void)
{
    printf("5的三次方為：%d", power(5, 3));
    return 0;
}

int power(int x, int y)
{
    int i, power = 1;
    for (i = 1; i <= y; i++)
    {
        power *= x;
    }
    return power;
}

/*   -----outcome-----

5的三次方為：125

*/