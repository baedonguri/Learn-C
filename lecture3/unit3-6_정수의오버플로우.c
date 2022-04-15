#include <stdio.h>
#include <limits.h>
#include <stdlib.h>



int main(void){
    // #1
    unsigned int i = 0b11111111111111111111111111111111;
    unsigned int u = UINT_MAX;

    printf("%u\n", i);
    printf("%u\n", u);


    // #2
    unsigned int u_max = UINT_MAX;
    unsigned int u_min = 0;
    signed int i_max = INT_MAX;
    signed int i_min = INT_MIN;


    printf("max of uint = %u\n", u_max);
    printf("min of uint = %u\n", u_min);

    printf("max of int = %d\n", i_max);
    printf("min of int = %d\n", i_min);

    // #3 overflow
    unsigned int u_max1 = UINT_MAX + 1;
    printf("%u\n", u_max1);


    /*
    // #4 
    // i to binary representation
    char buffer[33];
    _itoa(u_max1, buffer, 2);

    // print demical and binary
    printf("decimal: %u\n", u_max1);
    printf("binary : %s\n", buffer);
    */

    return 0;
}