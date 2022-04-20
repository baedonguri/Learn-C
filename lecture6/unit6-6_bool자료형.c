#include <stdio.h>
#include <stdbool.h>

int main(void){

    _Bool boolean_true = (2 > 1);
    _Bool boolean_false = (1 > 2);

    printf("This is %d\n", boolean_true);
    printf("This is %d\n", boolean_false);

    printf(boolean_true ? "true":"false");
    printf("\n");
    printf(boolean_false ? "true":"false");

    bool bt = true;
    bool bf = false;

    printf("\n");
    printf("True is %d\n", bt);
    printf("False is %d\n", bf);


    return 0;
}