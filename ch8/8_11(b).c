// 8.11(b)  443, 653
#include <stdio.h>
#include <stdlib.h>

int find(int);
int main()
{
    printf("孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。\n");
    printf("第五個滿足孫子問題的數為：%d\n", find(5));
    printf("第五個滿足孫子問題的數為：%d\n", find(7));
    return 0;
}

int find(int n)
{
    int i = 0, number, j = 1;
    while (i < n)
    {
        if ((j - 2) % 3 == 0)
            if ((j - 3) % 5 == 0)
                if ((j - 2) % 7 == 0)
                {
                    i++;
                }
        j++;
    }
    return j - 1;
}

/*   -----outcome-----

孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。
第五個滿足孫子問題的數為：443
第五個滿足孫子問題的數為：653

*/