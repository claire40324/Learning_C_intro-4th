//8.24
#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main(void)
{
    counter();
    counter();
    return 0;
}
void counter(void)
{
    static int a = 1;
    printf("counter已被呼叫%d次了\n", a);
    a++;
}

/*   -----outcome-----

counter已被呼叫1次了
counter已被呼叫2次了

*/
