// 8.1
#include <stdio.h>
#include <stdlib.h>

void kitty(void) //非主函式宣告在上面可以不用宣告函示原型
{
    printf("\"HELLO KITTY\"");
}

int main(void)
{
    kitty();
    return 0;
}

/*   -----outcome-----

"HELLO KITTY"

*/