//8.20
#include <stdio.h>
#include <stdlib.h>
int sum (int);
int main()
{
    printf("n = 5, sum(5) = %d", sum(5));
    return 0;
}
int sum( int n )
{
    if( n ==1)
    {
        return 1;
    }
    else
    {
        return n + sum (n-1);
    }
}

/*   -----outcome-----

n = 5, sum(5) = 15

*/