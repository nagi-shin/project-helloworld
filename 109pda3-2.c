//等差級數
#include <stdio.h>
main(){
    int x, y, sum;
    scanf("%d", &y);
    for( x = 1, sum = 0; x <= y; x++){
        sum = sum + x;
    }
    printf("%d\n", sum);
    return 0;
}