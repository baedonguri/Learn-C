#include <stdio.h>

int main(void){

    /*
        Assume that your input is :
        Hello 123 3.14
    */

   char str[255];
   int i, i2;
   double d;

   scanf("%s %d %lf", str, &i, &d);
   printf("%s %d %f\n", str, i, d);

   // or (see the difference)
   // 콘솔 입력을 받아올 때는 문자로 입력을 하나하나 받아오게 됨
   scanf("%s %d %d", str, &i, &i2); // i2에 소수를 입력할 때, scanf는 %d가 숫자가 아니라고 판단하며, 소수점 뒤는 받아들이지 않고, 밑으로 내려가게됨
   printf("%s %d %d\n", str, i, i2);   


   // or (see the difference)
   char c;

   while((c=getchar()) != '\n') // 버퍼에 남아있는 소수점 뒷부분 출력
        putchar(c);
    
    printf("\n");
    


    return 0;
}