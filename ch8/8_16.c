// 8.16
#include <stdio.h>
#include <stdlib.h>

int find_k(int);

int main(void)
{
    int n;
    while (1)
    {
        printf("請輸入一個整數n, 將從4k+2找一個最接近 n 的 k 值：");
        scanf("%d", &n);
        printf("k = %d\n", find_k(n));
    }
    return 0;
}

int find_k(int n)
{
    int a, k;
    a = (n - 2) % 4;
    k = (n - 2) / 4;
    if (a > 2)   //如果餘數大於3的話,k就要加一, ex: n = 21  (21-2) % 4 = 3, (21-2) / 4 = 4, 但21較靠近22,又 k = 5 = 4 + 1
        k = k + 1;
    return k;
}

/*   -----outcome-----

請輸入一個整數n, 將從4k+2找一個最接近 n 的 k 值：21
k = 5

*/
