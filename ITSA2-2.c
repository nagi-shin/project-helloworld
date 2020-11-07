//橫向列印九九乘法表
#include <stdio.h>
main(){
    int x, y, z, j;
    scanf("%d", &x);
    for (; x>0; x--){
        scanf("%d%d", &y, &z);
        j= z-y;
        for(int i=1; i<10; i++){                
            for( y; y<z; y++){
                printf("%d*%d=%2d,", y, i, y*i);
            }
            printf("%d*%d=%2d\n", y, i, y*i);
            y= y-j;
        }
    }
}