#include <stdio.h>
main()
{
    int x , y;
    while( x < 10 ){
        printf("%d*%d=%d\t", x, y, x*y);
        printf("\n");
        while( y < 10){
            y = y +1;
        }
        x = x + 1;
    }
}