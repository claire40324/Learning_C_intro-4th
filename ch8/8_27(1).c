// 8.27(1)
#include <stdio.h>
#include <stdlib.h>

int fib(int);
int for_fib(int);
int c1, c2;

int main(void)
{
    int n;
    for (n = 1; n <= 30; n++)
    {

        c1 = 1, c2 = 0;
        for_fib(n);
        printf("n=%d, for迴圈%d次,", n, c1);
        fib(n);
        printf("遞迴%d次\n", c2);
    }
    return 0;
}
int fib(int n) //遞迴
{
    c2++;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
//迴圈算次數方法一
int for_fib(int n) {
    int sum = 1, i;
    int j = 1, k = 1;
    if (n != 1 && n != 2) //不能寫or ,or 是其中有一符合就執行 需改為and
    {
        for (i = 2; i <= n; i++)
        {
            c1++;
            sum = j + k;
            j = k;
            k = sum;
        }
    }
    return sum;
}

/*   -----outcome-----

n=1, for迴圈1次,遞迴1次
n=2, for迴圈1次,遞迴1次
n=3, for迴圈3次,遞迴3次
n=4, for迴圈4次,遞迴5次
n=5, for迴圈5次,遞迴9次
n=6, for迴圈6次,遞迴15次
n=7, for迴圈7次,遞迴25次
n=8, for迴圈8次,遞迴41次
n=9, for迴圈9次,遞迴67次
n=10, for迴圈10次,遞迴109次
n=11, for迴圈11次,遞迴177次
n=12, for迴圈12次,遞迴287次
n=13, for迴圈13次,遞迴465次
n=14, for迴圈14次,遞迴753次
n=15, for迴圈15次,遞迴1219次
n=16, for迴圈16次,遞迴1973次
n=17, for迴圈17次,遞迴3193次
n=18, for迴圈18次,遞迴5167次
n=19, for迴圈19次,遞迴8361次
n=20, for迴圈20次,遞迴13529次
n=21, for迴圈21次,遞迴21891次
n=22, for迴圈22次,遞迴35421次
n=23, for迴圈23次,遞迴57313次
n=24, for迴圈24次,遞迴92735次
n=25, for迴圈25次,遞迴150049次
n=26, for迴圈26次,遞迴242785次
n=27, for迴圈27次,遞迴392835次
n=28, for迴圈28次,遞迴635621次
n=29, for迴圈29次,遞迴1028457次
n=30, for迴圈30次,遞迴1664079次

*\