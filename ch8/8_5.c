// 8.5
#include <stdio.h>
#include <stdlib.h>

int mod(int, int);
int main(void)
{
    printf("17除以5的餘數為：%d", mod(17, 5));
    return 0;
}

int mod(int x, int y)
{
    int mod = x % y;
    return mod;
}

/*   -----outcome-----

17除以5的餘數為：2

*/