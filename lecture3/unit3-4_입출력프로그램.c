#include <stdio.h>

int main(void){

    /*
    int i = 0, j = 0, sum = 0;

    printf("Input Two Integers\n");
    scanf("%d%d", &i, &j);

    sum = i + j;

    printf("Value is %d+%d = %d\n", i, j, sum);
    */


   float won = 0;
   float dollar = 0;

   printf("Input Won\n");
   scanf("%f", &won);
   
   dollar = won * 0.00089f;

   printf("Dollar = %f\n", dollar);


}