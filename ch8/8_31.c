//8.31

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define f(x) 4 * (pow(x,2)) + 6 * x - 5
int main(void)
{
    printf("f(1.0) = %lf\n", f(1.0));
    printf("f(2.2) = %lf\n", f(2.2));
    printf("f(3.14) = %lf\n", f(3.14));
    return 0;
}

/*   -----outcome-----

f(1.0) = 5.000000
f(2.2) = 27.560000
f(3.14) = 53.278400

*/
