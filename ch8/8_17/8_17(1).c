// 8.17 (1)  效率較差版本  在算分子時find_prime()已經找過一次質數, 在算分母時find_k(find_prime())又須再找一次質數
#include <stdio.h>
#include <stdlib.h>
int find_k(int);
double Euler(int);
int is_prime(int);
int find_prime(int);

int main(void)
{
    int i = 10;
    while (i <= 10000)
    {
        printf("Euler(%d) = %1f\n", i, Euler(i));
        i *= 10;
    }
    return 0;
}

double Euler(int x) //用來估算到第x項
{
    int i;
    double sum = 1;
    for (i = 1; i <= x; i++)
    {
        sum *= (double)find_prime(i) / find_k(find_prime(i)); //第一項質數,和把質數帶進find_k裡,所算出的分母
    }
    return 2 * sum;
}

int find_prime(int x)
{
    int i = 0, j;
    for (j = 3; i != x; j++)
    {
        if (is_prime(j))
        {
            i++;
        }
    }
    return j - 1;
}
int is_prime(int y) //找是否為質數
{
    int i;
    for (i = 2; i <= y / 2; i++)
    {
        if (y % i == 0)
            return 0;
    }
    return 1;
}

int find_k(int n) //由給的值數去找分母
{
    int a, k;
    a = (n - 2) % 4;
    k = (n - 2) / 4;
    if (a > 2) //如果餘數大於3的話,k就要加一, ex: n = 21  (21-2) % 4 = 3, (21-2) / 4 = 4, 但21較靠近22,又 k = 5 = 4 + 1
        k = k + 1;
    return 4 * k + 2;
}

/*   -----outcome-----

Euler(10) = 3.101520
Euler(100) = 3.133985
Euler(1000) = 3.137726
Euler(10000) = 3.140737

*/
