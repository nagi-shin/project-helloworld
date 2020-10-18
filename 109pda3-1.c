#include <stdio.h>
main(){
    int x , y;
    scanf("%d", &y);
    for( x = 1; x <= y; x++){
        printf("%d ", x);
    }
    printf("\n");
    return 0;
}