#include <stdio.h>
main()
{
    int i, s = 0, k;
    scanf("%d", &k);
    for( i = 1; i <= k; i++){
        s = s + i;
    }
    printf("%d\n", s);
    return 0;
}
