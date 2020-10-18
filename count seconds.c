#include <stdio.h>
main(){
    int h, m, s, result;
    scanf("%d%d%d", &h, &m, &s);
    result = h*60*60 + m*60 + s;
    printf("%d\n",result);
    return 0;
}