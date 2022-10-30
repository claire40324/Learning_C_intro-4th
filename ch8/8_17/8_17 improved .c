// 8.17 (2)效率較好版本 把質數先找好放在陣列裡存放  和找質數不超過質數的根號
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 10000
unsigned long int find_k(unsigned long int);
double Euler(int);
unsigned long int is_prime(unsigned long int);
void find_prime(int);

unsigned long int prime[MAX];
int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    int i = 10;

    find_prime(MAX);
    while (i <= MAX)
    {
        printf("Euler(%d) = %.11f\n", i, Euler(i));
        i *= 10;
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nCPU time = %.3lf sec.\n\n", cpu_time_used);

    return 0;
}

double Euler(int x) //用來估算到第x項
{
    int i;
    double sum = 1;
    for (i = 0; i < x; i++)
    {
        sum *= (double)prime[i] / find_k(prime[i]); //第一項質數,和把質數帶進find_k裡,所算出的分母
    }
    return 2 * sum;
}

void find_prime(int x)
{
    int i = 0, count = 0;
    unsigned long int j;
    for (j = 3; count < x; j++)
    {
        if (is_prime(j))
        {
            count++;
            prime[i] = j; //值assign給陣列
            i++;
        }
    }
}
unsigned long int is_prime(unsigned long int y) //找是否為質數
{
    unsigned long int i;
    for (i = 2; i <= (int)pow(y, 0.5); i++)
    {
        if (y % i == 0)
            return 0;
    }
    return 1;
}

unsigned long int find_k(unsigned long int n) //由給的值數去找分母
{
    int a;
    unsigned long int k;
    a = (n - 2) % 4;
    k = (n - 2) / 4;
    if (a > 2) //如果餘數大於2的話,k就要加一, ex: n = 21  (21-2) % 4 = 3, (21-2) / 4 = 4, 但21較靠近22,又 k = 5 = 4 + 1
        k = k + 1;
    return 4 * k + 2;
}

/*   -----outcome-----

Euler(10) = 3.10152045468
Euler(100) = 3.13398461979
Euler(1000) = 3.13772560728
Euler(10000) = 3.14073685086

CPU time = 0.044 sec.

*/
