#include <stdio.h>

int main(void){

    const int password = 337;
    int num = 0;


    // while (password != num){
    //     printf("Enter secret code : ");
    //     scanf("%d", &num);
    // }
    
    // printf("Good!\n");


    do {
        printf("Enter secret code : ");
        scanf("%d", &num);
    }while (password != num);

    printf("Good!\n");
    


    return 0;
}