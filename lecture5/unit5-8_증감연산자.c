#include <stdio.h>

int main(void){

    int count = 0;

    while (count++ < 10){
        printf("%d ",count);
        // ++count;
    }
    printf("\n");

    // int i = 1, j = 1;
    // int i_post, pre_j;

    // i_post = i++;
    // pre_j = ++j;

    // printf("%d %d\n", i, j);
    // printf("%d %d\n", i_post, pre_j);

    int i = 3;
    int l = 2 * --i;
    printf("%d %d\n", i, l);

    i = 1;
    l = 2 * i--;
    printf("%d %d\n", i, l);

    /* very high precedence */
    // int x,y,z;
    // x = 3, y =4;
    // z = (x + y++) * 5;
    // printf("%d %d %d\n", x,y,z); // result = 3, 5, 35

    /* ++ and -- affect modifiable lvalues */
    int x = 1, y = 1, z;
    z = x * y++; // (x) * (y++), not (x*y)++



    return 0;
}