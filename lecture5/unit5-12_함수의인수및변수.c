#include <stdio.h>

void draw(int n);

int main(void){

    int i = 5;
    char c = '#';
    float f = 7.1f;


    draw(i);
    draw((int)c);
    draw((int)f);

    return 0;
}

void draw(int n){
    for (int i=0; i <= n;i++){
        printf("*");
    }
    printf("\n");
}