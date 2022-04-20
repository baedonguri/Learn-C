#include <stdio.h>

int compute_pow(int base, int exp){
    int result = 1;
    for (int i=0; i < exp; i++){
        result *= base;
    }
    return result;
}

int main(void){
    int base, exp, result;
    while (scanf("%d %d", &base, &exp) ==2){
        
        result = compute_pow(base, exp);

        printf("Result = %d\n", result);
    }

    return 0;
}