#include<stdio.h>
#include<limits.h> //INT_MAX, ..., etc.
#include<float.h>  //FLT_MAX, ..., etc.

#define PI 3.141592

int main(void){

    printf("PI is %f\n", PI);
    printf("Biggest int: %d\n", INT_MAX);
    printf("One byte in this system is %d bits\n", CHAR_BIT);
    printf("Smallest normal float %e\n", FLT_MIN);

    return 0;
}