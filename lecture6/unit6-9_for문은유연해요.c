#include <stdio.h>

int main(void){

    for (int i=10; i > 0; i--){
        printf("%d ", i);
    }
    printf("\n");
    
    for (char c = 'A'; c <= 'Z'; c++){
        printf("%c ", c);
    }
    printf("\n");

    for (int i=0; i * i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");

    for (int x=1, y=5; y <= 20; y=(++x*3)+10){
        printf("%d ", x);
    }
    printf("\n");

    return 0;
}