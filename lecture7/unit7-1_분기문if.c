#include <stdio.h>

int main(void){

    int number;

    printf("Input a positive integer : ");
    scanf("%d", &number);


    if (number%2==0){
        printf("even number\n");
    }else{
        printf("odd number\n");
    }

    return 0;
}