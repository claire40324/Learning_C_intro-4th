// 8.35

#include <stdio.h>
#include <stdlib.h>
#include "area.h"

void main(void)
{
    printf("半徑為1.0的圓面積為：%f\n", CIRCLE(1.0));
    printf("長為5.0,寬為4.6的長方形面積為：%f\n", RECTANGLE(5.0, 4.6));
    printf("底為12.2,高為9.4的三角形面積為：%f\n", TRIANGLE(12.2, 9.4));
}

/*   -----outcome-----

半徑為1.0的圓面積為：3.140000
長為5.0,寬為4.6的長方形面積為：23.000000
底為12.2,高為9.4的三角形面積為：57.340000

*/
