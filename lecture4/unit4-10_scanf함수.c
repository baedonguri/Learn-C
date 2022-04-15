#include <stdio.h>
#include <inttypes.h>

int main(){

    /* multiple inputs with blank separators */
    int i;
    float f;
    char str[30];
    scanf("%d %f %s", &i, &f, str);
    printf("%d %f %s\n", i, f, str);


    /* character */
    char c;
    scanf("%c", &c); // try blank
    printf("%i\n", c); // blank is 32


    /* Unsigned as signed */
    unsigned j;
    scanf("%i", &j); // try negative number
    printf("%i\n", j);

    /* Unsigned as unsigned */
    unsigned i2;
    scanf("%u", &i2);
    printf("%u\n", i2);


    /* floating point numbers */
    double d;
    scanf("%lf",&d);
    printf("%f\n", d);


    /* Width */
    char str1[30];
    scanf("%5s", str1); // 5글자만 입력 받음
    printf("%s\n", str1);


    /* h modifier */
    char i3;
    scanf("%hhd", &i); // try large number 
    printf("%i\n", i3); // result = 0

    /* integer with character */
    int i4;
    scanf("%i",  &i4); // try 123a456
    printf("%i\n", i4); // result = 123

    /* j modifier */
    intmax_t i5;
    scanf("%ji", &i5);
    printf("%ji\n", i5);
    


}