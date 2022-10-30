//8.30

#include <stdio.h>
#include <stdlib.h>

void add10(int,int);
int a =3, b =5;
int main()
{
    printf("呼叫函數add10()之前：");
    printf("a= %d,b= %d\n",a,b);
    add10(a,b);
    printf("呼叫函數add10()之後：");
    printf("a= %d,b= %d\n",a,b);
    return 0;
}

void add10(int ＆a, int ＆b)
{
    a = a+10;
    b = b+10;
}

/*   -----outcome-----

呼叫函數add10()之前：a= 3,b= 5
呼叫函數add10()之後：a= 13,b= 15

*/