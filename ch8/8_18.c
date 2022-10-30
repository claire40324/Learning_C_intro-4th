// 8.18   for迴圈,以遞迴去呼叫呼叫太多次 以fib(5)為例需呼叫9次
#include <stdio.h>
#include <stdlib.h>
int fib(int);
void main(void)
{
    int n;
    printf("請輸入一整數以計算費氏數列：");
    scanf("%d", &n);
    printf("fib(%d) = %d", n ,fib(n));
}

int fib(int n)
{
    int sum = 1, i;
    int j = 1, k = 1;
    if (n != 1 && n != 2) //此處不適用or 因為只要一個成立就會進去
    {
        for (i = 3; i <= n; i++)
        {
            sum = j + k;
            j = k;
            k = sum;
        }
    }
    return sum;
}

/*   -----outcome-----

請輸入一整數以計算費氏數列：10
fib(10) = 55

*/