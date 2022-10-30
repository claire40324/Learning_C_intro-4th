// 8.36(a)

#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

void main(void)
{
    int num;
    printf("請輸入一個整數：");
    scanf("%d", &num);
    printf("%d的平方值為：%d\n", num, SQUARE(num));
    printf("%d的立方值為：%d\n", num, CUBIC(num));
    printf("%d的絕對值為：%d\n", num, ABS(num));
}

/*   -----outcome-----

請輸入一個整數：-12
-12的平方值為：144
-12的立方值為：-1728
-12的絕對值為：12

*/