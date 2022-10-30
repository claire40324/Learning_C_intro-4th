// 8.25
#include <stdio.h>
#include <stdlib.h>

void counter(void);
int fib(int);

int main(void)
{
    fib(5);
    return 0;
}
void counter(void)
{
    static int a = 1;
    printf("counter已被呼叫%d次了\n", a);
    a++;
}

int fib(int n)
{
    counter();
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
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