// 8.28
#include <stdio.h>
#include <stdlib.h>

void counter(void);
int a = 0;
int main(void)
{
    counter();
    counter();
    return 0;
}
void counter(void)
{
    a++;
    printf("counter已被呼叫%d次了\n", a);
}

/*   -----outcome-----

counter已被呼叫1次了
counter已被呼叫2次了

*/
