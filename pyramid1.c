#include <stdio.h>
main(){
    int i , j;
    for (i = 1; i <= 5 ; i++){
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\nprint opposite pyramid\n");
    int x , y;
    for ( x = 5; x > 0; x--){
        for(y = 1; y <= x; y++){
            printf("*");
        }
        printf("\n");
    }
}