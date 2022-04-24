#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main(void){

    int num = 3;

    printf("loop : %ld\n", loop_factorial(num));
    printf("recursive : %ld\n", recursive_factorial(num));


    return 0;
}


long loop_factorial(int n){
    long result;

    for (result=1; n > 1; n--)
        result *= n;
    
    return result;
}

long recursive_factorial(int n){
    
    if (n == 1)
        return 1;


    return n * recursive_factorial(n-1);
}