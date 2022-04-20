#include <stdio.h>
#include <stdbool.h>

int main(void){

    unsigned num;
    bool isPrime;

    scanf("%u", &num);

    isPrime = true;
    for (unsigned i=2; (i*i)<=num;i++){
        if (num%i == 0){
            isPrime = false;

            if (num == i*i)
                printf("%u is divisible by %u.\n", num, i);
            else
                printf("%u is divisible by %u and %u.\n", num, i, num/i);
        }
    }



    if (isPrime)
        printf("%u is a prime number.\n", num);
    else
        printf("%u is not a prime number.\n", num);

    return 0;
}