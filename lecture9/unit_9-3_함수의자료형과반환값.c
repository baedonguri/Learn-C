#include <stdio.h>

int int_min(int n1, int n2);

int main(void){

    int i1, i2;

    while(1)
    {
        printf("Input two integers : ");

        if (scanf("%d %d", &i1, &i2) != 2)    break;

        int lesser = int_min(i1,i2);
        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
    }

    printf("End.\n");
}

int int_min(int n1, int n2){
    int min = 0;

    min = (n1 > n2) ? n2 : n1;

    return min;
}