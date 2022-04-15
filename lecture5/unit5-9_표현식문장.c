#include <stdio.h>

int main(void){

    /* promotions in assignments */
    // 작은 변수를 큰 변수에 저장

    short s = 64;
    int i = s;

    float f = 3.14f;
    double d = f;

    /* demotion in assignments */
    d = 1.25;
    f = 1.25;
    f = 1.123f;


    d = f + 1.234; // 자료형을 double로 변환 후 연산
    f = f + 1.234;

    /* automatic promotion of function arguments */
    // 1. Functions without prototypes
    // 2. Variadic functions (ellipsis)

    /* casting operators */
    d = (double)3.14f;
    i = 1.6 + 1.7;
    printf("%d\n", i);
    i = (int)1.6 + (int)1.7;
    printf("%d\n", i);


    return 0;
}