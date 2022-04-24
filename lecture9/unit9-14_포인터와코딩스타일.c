#include <stdio.h>

int main(void){

    // int a = 1234;
    // printf("%p\n", &a);
    // printf("%d\n", a);

    // int *ptr = 1234;

    // printf("%p\n", ptr);
    // printf("%d\n", *ptr);
    
    int* safer_ptr = NULL; // 초기화 해주는 것이 일반적.

    int a = 123;

    // safer_ptr = &a;
    int b;
    scanf("%d", &b);

    if (b%2 == 0)
        safer_ptr = &a;

    if (safer_ptr != NULL)
        printf("%p\n", safer_ptr);

    if (safer_ptr != NULL)
        printf("%d\n", *safer_ptr);

    


    return 0;
}