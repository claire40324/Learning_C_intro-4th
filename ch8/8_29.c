// 8.29

#include <stdio.h>
#include <stdlib.h>

void add10(int, int);
int a = 3, b = 5;
int main()
{
    printf("呼叫函數add10()之前：");
    printf("a=%d,b=%d\n", a, b);
    add10(a, b);
    printf("呼叫函數add10()之後：");
    printf("a=%d,b=%d\n", a, b);
    return 0;
}

void add10(int a, int b)
{
    a = a + 10;
    b = b + 10;
}

/*   -----outcome-----

當全域變數和區域變數同名時, 區域變數活動範圍裡的會取代全域變數,add10()裡的a和b是區域變數,函式結束變數也結束
呼叫函數add10()之前：a=3,b=5
呼叫函數add10()之後：a=3,b=5

*/

