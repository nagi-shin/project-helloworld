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