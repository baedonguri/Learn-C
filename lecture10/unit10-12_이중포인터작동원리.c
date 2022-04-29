#include <stdio.h>

int main(void){

    int a = 7;
    int* ptr = &a;
    *ptr = 8 ;// 간접접근(역참조) indirection

    int **pptr = &ptr;

    **pptr = 9; // double indirection

    printf("a is %d\n", a);

    return 0;
}