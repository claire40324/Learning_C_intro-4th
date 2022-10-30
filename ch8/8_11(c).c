// 8.11(c)  443, 653
#include <stdio.h>
#include <stdlib.h>

int find(int);
int main()
{
    printf("孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。\n");
    find(12);
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
                    printf("第%d個滿足孫子問題的數為：%d\n", i, j);
                }
        j++;
    }
    return 0;
}

/*   -----outcome-----

孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。
第1個滿足孫子問題的數為：23
第2個滿足孫子問題的數為：128
第3個滿足孫子問題的數為：233
第4個滿足孫子問題的數為：338
第5個滿足孫子問題的數為：443
第6個滿足孫子問題的數為：548
第7個滿足孫子問題的數為：653
第8個滿足孫子問題的數為：758
第9個滿足孫子問題的數為：863
第10個滿足孫子問題的數為：968
第11個滿足孫子問題的數為：1073
第12個滿足孫子問題的數為：1178

*/
