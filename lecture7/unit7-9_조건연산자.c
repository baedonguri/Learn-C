#include <stdio.h>
#include <stdbool.h>


int main(void){
    int temp;
    temp = true ? 1024 : 7; // ternary
    printf("%d\n", temp);

    temp = false ? 1024 : 7;
    printf("%d\n", temp);


    int number;
    scanf("%d", &number);

    // if (number%2 ==0)
    //     is_even = true;
    // else
    //     is_even = false;

    // const bool is_even = (number%2==0) ? true : false; // ? -> 연산자 우선순위 낮음. 하지만 웬만하면 동작 됨. 하지만 가독성을 위해 괄호를 쳐줌

    // if (is_even)
    //     printf("Even\n");
    // else   
    //     printf("Odd\n");

    bool is_even = (number%2==0) ? printf("even\n") : printf("odd\n");


    int a = 1, b = 2;
    int max = (a>b) ? a : b;
    printf("Max is %d\n", max);

}