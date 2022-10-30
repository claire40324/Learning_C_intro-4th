// 8.32

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CUBIC(x) pow(x,3)

int main()
{
    printf("5的三次方為：%lf\n", CUBIC(5));
    printf("2.4的三次方為：%lf\n", CUBIC(2.4));
    return 0;
}

/*   -----outcome-----

5的三次方為：125.000000
2.4的三次方為：13.824000

*/