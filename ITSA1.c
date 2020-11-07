//總和 差 乘積 商數 餘數運算
#include <stdio.h>
main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d+%d=%d\n", x, y, x+y);
    printf("%d-%d=%d\n", x, y, x-y);
    printf("%d*%d=%d\n", x, y, x*y);
    printf("%d/%d=%d...%d\n", x, y, x/y, x-x/y*y);
    return 0;
}