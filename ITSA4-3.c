#include <stdio.h>
main(){
    int i, j=1, y=0, z=1, x;
    scanf("%d", &i);
    x = y+z;
    while( i >= j ){
        printf("fib(%d)=%d\n", j, x);
        x = y+z;
        z = y;
        j++;
    }
    return 0;
}
