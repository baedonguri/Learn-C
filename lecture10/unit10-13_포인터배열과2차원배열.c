#include <stdio.h>

int main(void){

    /* Two of 1D array */
    int arr0[3] = {1,2,3}; //arr0의 주소는 index 0 = 4의 주소와 같다.
    int arr1[3] = {4,5,6}; // arr1의 주소는 index 0 = 4의 주소와 같다.

    int* parr[2] = {arr0, arr1}; // arr0과 arr1이 모두 저장돼 2차원 리스트가 됨

    for (int i=0; i<2; i++){
        for(int j=0; j < 3; j++){
            printf("%d(==%d, %d) ", parr[i][j], *(parr[i] + j), *(*(parr + i)+j)); 
            // #1 2차원 배열인것처럼 사용
            // #2 배열 안에 포인터가 있는 것이기 때문에 indirection operator를 사용할 수 있음 -> 배열의 i번째 요소 주소에 J를 더해서 가져옴
            // #3 parr 배열의 이름을 포인터로 사용하여 이중포인터로 사용
        }
        printf("\n");
    }

    /*2D arrays are arrays of 1D arrays */
    int arr[2][3] = {{1,2,3}, {4,5,6}};

    // 포인터 2개 사용
    int* parr0 = arr[0];
    int* parr1 = arr[1];

    for (int i = 0; i<3; i++)
        printf("%d ", parr0[i]);
    printf("\n");

    for (int i = 0; i<3; i++)
        printf("%d ", parr1[i]);
    printf("\n");

    /* arrays of pointers works like a 2D array */
    int* parr3[2];
    parr3[0] = arr[0]; 
    parr3[1] = arr[1];

    for (int j=0; j<2; j++){
        for (int i=0; i < 3; i++){
            printf("%d %d %d %d\n", arr[j][i], parr3[j][i], *(parr3[j]+i), *(*(parr3+j)+i));
        }
        printf("\n");
    }

    printf("포인터와 배열의 차이\n");

    printf("%p\n", &parr3[0]); // 포인터 자체의 주소
    printf("%p\n", parr3[0]);  // 가리키고 있는 주소, 그래서 위에것과 다름

    // 아래는 다 같음
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%p\n", arr[0]);
    printf("%p\n", &arr[0][0]);
    printf("\n");

    // 포인터의 배열 예제
    // name 배열에는 'A', 'J', 'M', 'G' 의 첫번째 주소값이 저장됨
    char* name[] = {'Aladdin', 'Jasmine','Magic Carpet','Genie'};

    const int n = sizeof(name) / sizeof(char *);

    for(int i =0; i < n; i++)
        printf("%s at %llu\n", name[i], (long long unsigned)name[i]);

    char aname[][15] = {'Aladdin', 'Jasmine','Magic Carpet','Genie'};

    const int an = sizeof(aname) / sizeof(char[15]);

        for(int i =0; i < n; i++)
        printf("%s at %llu\n", name[i], (long long unsigned)name[i]);

    return 0;
}  