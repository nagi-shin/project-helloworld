#include <stdio.h>
main ()
{
    printf("fahr\tcelsius\n");
    float afahr, acelsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    afahr = lower;
    while(afahr <= upper)
    {
        acelsius = (5.0/9.0) * (afahr - 32.0);
        printf("%3.0f\t %6.1f\n",afahr, acelsius);
        afahr = afahr + step;
    } 
}