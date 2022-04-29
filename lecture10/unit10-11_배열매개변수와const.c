#include <stdio.h>

void print_array(const int arr[], const int n){
    for (int i=0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void add_value(int arr[], const int n, const int val){
    int i;
    for (i=0; i < n; i++)
        arr[i] += val;
}

int sum(const int arr[], const int n){
    int i;
    int total = 0;

    for (i = 0; i<n; i++)
        total += arr[i]; // wrong implementation

    return total;
}


int main(void){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    print_array(arr, 5);
    add_value(arr, n, 100);
    print_array(arr,5);

    int s = sum(arr, n);

    printf("sum is %d\n", s);
    print_array(arr,5);


    return 0;
}


// 값이 바뀌면 안되는 경우 const를 통해 변수를 상수 처리 해준다.
