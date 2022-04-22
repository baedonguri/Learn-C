#include <stdio.h>

int main(void){

    int c;

    // while ((c=getchar()) != EOF) // End Of File -> ctrl z을 입력하면 종료
    //     putchar(c);


    // stream
    while (1){
        c = getchar();
        printf("%d\n", c);
        if (c == EOF)
            break;

    }
    return 0;
}