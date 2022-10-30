// 8.12(a)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(int n)
{
    int i;
    double sum = 0;
    double x = 1;
    for (i = 1; i <= n; i++)
    {
        sum += x / pow(2, i); //整數除整數還是整數,需把被除數或是兩個都轉換為浮點數
    }
    return sum;
}
int main(void)
{
    int i = 3;
    my_fun(i);
    while (i < 7)
    {
        printf("myfun(%d) = %f \n", i, my_fun(i));
        i++;
    }
    return 0;
}

/*   -----outcome-----

myfun(3) = 0.875000 
myfun(4) = 0.937500 
myfun(5) = 0.968750 
myfun(6) = 0.984375 

*/