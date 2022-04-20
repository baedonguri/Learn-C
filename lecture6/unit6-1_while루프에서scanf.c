#include <stdio.h>

int main(void){

    int num, sum = 0;
    int status;


    printf("Enter an integer (q to quit) : "); // return value of scanf()
    
    status = scanf("%d", &num);

    while (status == 1){ // equality operator
        printf("Enter next integer (q to quit) : ");
        status = scanf("%d", &num);
        sum = sum + num;
    }

    printf("Sum = %d\n", sum);


    return 0;
}