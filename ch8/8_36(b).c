// 8.36(a)

#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

void main(void)
{
    float num1, num2;
    printf("請輸入兩個數：");
    scanf("%f %f", &num1, &num2);
    printf("%f 和 %f 的平均值為：%f\n", num1, num2, AVERAGE(num1,num2));
    printf("%f 和 %f 的乘積為：%f\n", num1, num2, PRODUCT(num1,num2));
}

/*   -----outcome-----

請輸入兩個數：12.2 3
12.200000 和 3.000000 的平均值為：7.600000
12.200000 和 3.000000 的乘積為：36.599998

*/