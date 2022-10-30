//8.22
#include <stdio.h>
#include <stdlib.h>

int rsum(int);
int main()
{
    printf("rsum(5) = %d", rsum(5));  
    return 0;
}

int rsum(int n )
{
    if(n ==2)
    {
        return 2;
    }
    else
    {
        return (n-1) *n + rsum(n-1);
    }
}

/*   -----outcome-----

rsum(5) = 40

*/