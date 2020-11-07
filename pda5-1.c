#include <stdio.h>
//矩形
main(){
    int x, y, i=1, j=1;
    scanf("%d%d", &x, &y);
    for( i=1; i<=y; i++){
        j=1;
        while( j<=x){
            printf("*");
            j++;
        }
    printf("\n");
    }
}