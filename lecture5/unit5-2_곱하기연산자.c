#include <stdio.h>

int main(void){

    int seed = 0;
    int target = 0;
    float rate = 0.0;

    printf("Input seed money :");
    scanf("%d",&seed);

    printf("Input target money :");
    scanf("%d", &target);

    printf("Input annual interest : (%%)");
    scanf("%f", &rate);


    double fund = seed;
    int year = 0;


    while (fund <= target){
        fund += fund * (rate/100);
        year++;

        printf("%f\n", fund);
    }

    printf("It takes %d years\n", year);



    return 0;
}