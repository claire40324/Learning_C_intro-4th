// 8.7

#include <stdio.h>
#include <stdlib.h>

int prime(int n) //判別是否為質數
{
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main(void)
{
    int sum = 1, i = 2;
    while (sum <= 100)
    {
        if (prime(i))
        {
            printf("第%d個質數為：%d \n", sum, i);
            sum++;
        }
        i++;
    }
    return 0;
}

/*   -----outcome-----

第1個質數為：2 
第2個質數為：3 
第3個質數為：5 
第4個質數為：7 
第5個質數為：11 
第6個質數為：13 
第7個質數為：17 
第8個質數為：19 
.....
.....
.....
第96個質數為：503 
第97個質數為：509 
第98個質數為：521 
第99個質數為：523 
第100個質數為：541 

*/
