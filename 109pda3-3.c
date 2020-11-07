//直角三角形(一)
#include <stdio.h>
main(){
    int x, y, z;
    scanf("%d", &y);
    for( x = 1; x <= y; x++){
        for(z = 1;  z <= x; z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}