#include <stdio.h>
main()
{
    
    float fahr, celsius;
    int lower, upper, step;

    printf("celsius\tfahr\n");

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    
    while(celsius <= upper)
        {
            fahr = (celsius * (9.0/5.0) + 32);
            printf("%6.0f%6.0f\n",celsius,fahr);
            celsius = celsius + step;
        }
}