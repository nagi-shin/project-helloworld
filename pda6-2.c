#include <stdio.h>
//費式數列(一)
main(){
    int x=1, y=1, z=1, n, item=1;
    scanf("%d", &n);
    while( z<=n){
        if(3<=z){
            item=x+y;
            x=y;
            y=item;
        }
    printf("fib(%d)=%d\n", z, item);
    z++;
    }
    return 0;
}