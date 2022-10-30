// 8.26

#include <stdio.h>
#include <stdlib.h>

void counter(void);
double rpower(double, int);
int main(void)
{
    rpower(2.0, 9);
    return 0;
}
void counter(void)
{
    static int a = 1;
    printf("counter已被呼叫%d次了\n", a);
    a++;
}
double rpower(double b, int n)
{
    counter();
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

counter已被呼叫1次了
counter已被呼叫2次了
counter已被呼叫3次了
counter已被呼叫4次了
counter已被呼叫5次了
counter已被呼叫6次了
counter已被呼叫7次了
counter已被呼叫8次了
counter已被呼叫9次了

*/
