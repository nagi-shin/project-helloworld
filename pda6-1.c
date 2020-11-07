#include <stdio.h>
//列印直角三角形(二)
main(){
    int h;
    scanf("%d", &h);
    for(int i=1; i<=h; i++){
        for(int j=h-i; j>0; j--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}