// 8.2
#include <stdio.h>
#include <stdlib.h>

void kitty(int);
int main(void)
{
    kitty(2);
    return 0;
}

void kitty(int k)
{
    int i;
    for (i = 1; i <= k; i++)
    {
        printf("Hello Kitty\n");
    }
}

/*   -----outcome-----

k = 2, 顯示k行的 HELLO KITTY
"HELLO KITTY"
"HELLO KITTY"

*/