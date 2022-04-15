#include <stdio.h>

int main(void){
    
    int n1, n2, n3, n4;

    /*
    n1 = 1;
    n2 = n1 * n1;
    n3 = n2 * n1;
    n4 = n2 * n1;
    */

    // n의 4제곱을 구하는 예제 -> 문맥 오류 
    n1 = 1;
    n2 = n1 * n1;
    n3 = n2 * n1;
    n4 = n2 * n1; // n3가 아닌 n2을 넣는 오류 -> 컴파일러가 잡아줄 수 없음

    return 0;
}  