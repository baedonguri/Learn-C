#include <stdio.h>

int main(void){
    
    int arr[10];

    const int num = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i < num; ++i)
        arr[i] = (i+1) * 100;

    int* ptr = arr;

    printf("%p %p %p\n", ptr, arr, &arr[0]);

    ptr += 2;

    printf("%p %p %p\n", ptr, arr+2, &arr[2]);


    //Note : arr += 2; // 배열의 이름이 포인터처럼 사용할 수는 있지만 완벽하지 않다. 따라서 이 연산은 불가능하다

    printf("%d %d %d\n", *(ptr+1), *(arr + 3), arr[3]); // dereferncing으로 실제 값을 가져옴 indexing

    // Warning
    printf("%d %d %d\n", *ptr+1, *arr + 3, arr[3]); // 괄호를 넣지 않으면 다른 값이 나오게 됨

    int* ptr2 = arr;

    for (int i=0; i < num; ++i){
        // printf("%d %d\n", *ptr2++, arr[i]);
        // printf("%d %d\n", *(ptr2+i), arr[i]); // 첫주소에 i값을 더해서 가져오기
        printf("%d %d\n", *ptr2+i, arr[i]); // 완전 다른 결과 100+1, 100+2 ...
    }

    return 0;
}