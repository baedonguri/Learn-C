#include <stdio.h>

#define MONTHS 12

int main(void){
    int high[MONTHS] = {2,5,11,18,23,27,29,30,26,20,12,4};

    for (int i=0; i < MONTHS; ++i)
        printf("%d ",high[i]);
    printf("\n");

    float avg = 0.0;
    for (int i = 0; i<MONTHS; ++i)
        avg += high[i];
    printf("Average = %f\n", avg/(float)MONTHS);

    printf("%p %p\n", high, &high[0]);
    for (int i = 0; i < MONTHS; ++i)
        printf("%lld\n", (long long)&high[i]);
    printf("\n");


    /*Compiler doesn't check whether indices are valid*/
    // high[12] = 4; // error
    // high[-1] = 123; // error

    /* Const and array */
    // const int low[12] = {2,5,11,18,23,27,29,30,26,20,12,4};
    // low[0] = 123; // const error

    /* When array is not initialized */
    // static int not_init[4]; // (storage class)
    // int not_init[4];
    // for (int i = 0; i < 4; i++)
    //     printf("%d\n", not_init[i]); // 컴파일환경에 따라 다르지만, x64에는 0이 들어감 == 쓰레기 값


    /* Partially initialized */
    // int insuff[4] = {2,4};
    // for (int i=0; i<4; i++)
    //     printf("%d\n", insuff[i]); // 앞부터 채워주고 뒤는 0으로 초기화 해줌

    /* Overlly initialized */
    // int over[2] = {2,4,8,15}; // error


    /* Const and array */
    // const int power_of_twos[] = {1,2,4,8,16,32,64}; // 배열안의 숫자를 지정해주지 않아도 ok
    // printf("%d\n", sizeof(power_of_twos));
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(power_of_twos[0]));

    // for (int i=0; i< sizeof power_of_twos / sizeof power_of_twos[0]; i++) // 전체메모리크기 / 4바이트
    //     printf("%d ", power_of_twos[i]);


    /* Const and array */
    int days[MONTHS] = {31, 28, [4]=31, 30,31, [1] = 29};
    for (int i =0; i < MONTHS; i++)
        printf("%d ", days[i]);
    return 0;
}