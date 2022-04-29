#include <stdio.h>

int main(void){
    float arr2d[2][4] = {{1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f,8.0f}};

    printf("%lu\n", (long unsigned)arr2d);
    printf("%lu\n", (long unsigned)arr2d[0]); // 주소가 같음
    printf("\n");
    // arr2d points가 가리키는 주소는 arr2d[0]이다.  -> 이건 주소이기 때문에 ->
    // arr2d[0][0]과 다름 -> 이건 값임

    printf("%lu\n", (unsigned)* arr2d); 
    printf("%lu\n", (unsigned)& arr2d[0]); // arr2d의 주소값이 출력됨
    printf("%lu\n", (unsigned)& arr2d[0][0]); // 2차원 배열의 첫번째 원소값이기 때문에 이또한 같은 주소가 출력됨
    printf("%f %f\n", arr2d[0][0], **arr2d); // 둘다 값을 출력하는 것 
    printf("\n");

    // arr2d[2][0]의 첫번째 주소를 가리키는 방법들
    printf("%lu\n",(unsigned)(arr2d+1));
    printf("%lu\n",(unsigned)(&arr2d[1]));
    printf("%lu\n",(unsigned)(arr2d[1]));
    printf("%lu\n",(unsigned)*(arr2d+1));
    printf("%lu\n",(unsigned)(&arr2d[0]+1));
    printf("%lu\n",(unsigned)(&arr2d[1][0])); 

    printf("%f\n", *(*(arr2d+1)+2));

    for(int i = 0; i < 2; i++){
        printf("[%d] = %u, %u\n", i, (unsigned)(arr2d[i]), (unsigned)*(arr2d + i));
        for (int j=0; j < 4; j ++){
            printf("[%d][%d] = %f, %f\n", i,j, arr2d[i][j], *(*(arr2d+i)+j));
            *(*(arr2d+j)+i) += 1.0f;
        }
    }
    printf("\n");



}