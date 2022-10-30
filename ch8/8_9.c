//8.9


#include <stdio.h>
#include <stdlib.h>

int is_prime(int);
int main(void)
{
    int i;
    for (i = 1; i <= 30; i++)
    {
        if (is_prime(i))
        {
            printf("%3d", i);
        }
    }
    printf("\n");
    return 0;
}

int is_prime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    if (num == 1)
        return 0;
    return 1;
}

/*   -----outcome-----

2  3  5  7 11 13 17 19 23 29

*/
