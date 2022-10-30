// 8.10  效率較差版本
#include <stdio.h>
#include <stdlib.h>

int find_m_prime(int);
int main(void)
{
    long int i = 2, count = 1; // 1 不算質數,從2開始跑
    while (count < 9)
    {
        if (find_m_prime(i))
        {
            printf("第%d個梅森尼質數為%d\n", count, i);
            count++;
        }
        i++;
    }
    return 0;
}
int find_m_prime(int num)
{
    num++;
    int mod;
    int temp, num1;
    int i = 2, b = 1;
    temp = num;
    num1 = temp;
    while (num1 > 2) //找是否可以被2連續整除
    {
        mod = num1 % 2;
        num1 = num1 / 2;
        if (mod != 0) //只要一有餘數就跳出
        {
            return 0;
        }
    }
    num--;
    while (i <= num / 2) //可以被2整除的數是否是質數
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

// 8.10     效率比較快版本
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_m_prime(int);
int main(void)
{
    long int i = 2, count = 1; // 1 不算質數,從2開始跑
    while (count < 9)
    {
        if (find_m_prime(i))
        {
            printf("第%d個梅森尼質數為%d\n", count, find_m_prime(i));
            count++;
        }
        i++;
    }
    return 0;
}
int find_m_prime(int num)
{
    int prime, i = 2;
    prime = pow(2, num) - 1; //先定義好滿足2的n次方-1
    while (i <= prime / 2)   //判斷prime是否為質數,大於一半的數可以不用考慮
    {
        if (prime % i == 0)
        {
            return 0;
        }
        i++;
    }
    return prime;
}

/*   -----outcome-----

第 1 個森梅尼質數為 3
第 2 個森梅尼質數為 7
第 3 個森梅尼質數為 31
第 4 個森梅尼質數為 127
第 5 個森梅尼質數為 8191
第 6 個森梅尼質數為 131071
第 7 個森梅尼質數為 524287
第 8 個森梅尼質數為 2147483647

*/
