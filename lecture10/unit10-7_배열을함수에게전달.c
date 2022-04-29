#include <stdio.h>

// 함수의 프로토타입
// double average(double *arr, int n);
// double average(double [], int n);
// double average(double *, int n); // 배열의 첫번째 주소를 넘기는 프로토타입들


// 배열을 함수에 전달해줄때는 배열이 포인터로 바뀌기 때문에 첫번째 주소밖에 남지 않는다.
// 따라서 필요한 갯수를 따로 받아주어야 한다.
double average(double arr[], int n){
    double avg = 0.0;
    for (int i=0; i < n; ++i)
    {
        avg += arr[i];
    }

    avg /= (double)n;


    return avg;
}

int main(void){

    double arr1[5] = {10,13,12,7,8};
    double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};
    double arr3[3] = {1.8, -0.2, 6.3};


    printf("Address = %p\n", arr1);
    printf("Size = %zd\n", sizeof(arr1));

    printf("Avg = %f\n", average(arr1,5));
    printf("Avg = %f\n", average(arr2,5));

    printf("Avg = %f\n", average(arr3,3));
    return 0;
}

