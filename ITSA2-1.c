//列印九九乘法表
#include <stdio.h>
main(){
    int x, i, j;
    scanf("%d", &i);
    for (; i>0; i--){
        scanf("%d", &j);
        for(x=1; x<10; x++){
            printf("%d*%d=%d\n", j, x, (j*x));
        }
    }
}