// 8.11(a)  23
#include <stdio.h>
#include <stdlib.h>
int find(void);
int main()
{
    printf("滿足孫子問題裡的最小整數為：%d", find());
    return 0;
}

int find(void)
{
    int j = 1;
    while (1)
    {
        if ((j - 2) % 3 == 0)
            if ((j - 3) % 5 == 0)
                if ((j - 2) % 7 == 0)
                {
                    return j;
                }
        j++;
    }
}

/*   -----outcome-----

滿足孫子問題裡的最小整數為：23

*/
