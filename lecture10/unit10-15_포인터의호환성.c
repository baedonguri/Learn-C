#include <stdint.h>

int main(){
    /* Pointer Compatibility*/

    int n = 5;
    double x;
    x = n; // no error : 자동 형변환
    int* p1 = &n;
    double* pd = &x;
    // pd = p1; // Warning
    

    int* pt; // 그냥 포인터
    int(*pa)[3]; // 3개의 원소를 가진 배열에 대한 포인터를 담을 수 있는 그릇

    int ar1[2][3] = {3,};
    int ar2[3][2] = {7,};
    int ** p2;

    pt = &ar1[0][0]; // pointer to int
    pt = ar1[0][0];

    return 0;


}