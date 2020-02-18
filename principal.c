#include <stdio.h>
#include "libreria.h"

int main(void)
{
    int a=10;
    int b=4;

    printf("The biggest is: %d\n", the_biggest(a, b));

    printf("The smalles is: %d\n", the_smallest(a, b));

    return 0 ;
}