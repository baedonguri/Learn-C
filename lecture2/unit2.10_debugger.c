#include <stdio.h>

void say_hello(void);


int main(void){
    int x, y, z;

    x = 1;
    y = 2;

    z = x+y;
    say_hello();
}


void say_hello(void){
    int x = 1;
    x = 10;
    
    printf("Hello World\n");
}