#include <stdio.h>
#include <limits.h>

int main(void){

    printf("%10i\n", 1234567); // 10칸 채워줌
    printf("%-10i\n",1234567); // - flag를 통해 왼쪽으로 붙여서 10칸 채워줌
    printf("%+i %+i\n", 123, -123);
    printf("% i \n% i\n", 123, -123); // %와 i사이에 공백이 있을 시, 양수는 떨어져서, 음수는 붙어서 나옴
    printf("%X\n", 17); // 16진수 표기법
    printf("%#X\n", 17); // 0X로 시작하는 16진수 표기법
    printf("%05i\n", 123); // 5칸으로 매우는데, 앞쪽을 0으로 채움
    printf("%*i\n", 7, 456); // width를 %*i로 7로 세팅, 총 7자리로 표기


    printf("\nPrecision\n");
    printf("%.3d\n", 1024);
    printf("%.5d\n", 1024);
    printf("%.3f\n", 123456.1234567);
    printf("%.3f\n", 123456.1235);
    printf("%10.3f\n", 123.45678);
    printf("%010.3f\n", 123.45678);
    printf("%.5s\n", "ABCDEFGHIJKLMN"); // 앞 5자리 출력
    printf("%.s\n", "ABCDEFGHIJKLMN"); // 아무것도 넣지 않으면 0으로 인식해서 출력 x
    
    printf("\nLength\n");
    printf("%hhd %hd %d\n", 257, 257, 257); // hhd : char, hd : short, d : int
    printf("%d %lld %lld\n", INT_MAX+1, INT_MAX+1, 2147483648LL);

    return 0;
}