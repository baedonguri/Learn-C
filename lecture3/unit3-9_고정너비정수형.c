#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void){

    int i;
    int32_t i32;    // 32bit integer
    int_least8_t i8; // smallest 8 bit
    int_fast8_t f8; // fastest minimum
    intmax_t imax; // biggest signed integer
    uintmax_t uimax; // biggest unsigned integer


    i32 = 1004;

    printf("me32 = %d\n", i32);
    printf("me32 = %" "d" "\n", i32);
    printf("me32 = %" PRId32 "\n", i32);

    return 0;
}