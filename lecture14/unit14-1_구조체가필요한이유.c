#include <stdio.h>
#define MAXNAME 100


// 구조체를 사용하는 이유
// 환자 정보를 저장할 일반적인 배열을 생성한다고 했을 때, 환자의 데이터가 많은 상태라면
// 정보를 찾을 때, 데이터들의 자료형이 모두 다르다면 비효율적일 수 있음(char형 이름, int형 나이 등등..)

// 같은 자료형을 가진 데이터끼리 묶는다면 더욱 효율적으로 데이터를 관리할 수 있다.
// 구조체는 다양한 자료형을 묶어서 하나의 자료형으로 사용할 수 있게 해줌
typedef struct {
    char name[MAXNAME];
    float height;
    float weight;
    int age;
} Patient;


int main(){
    Patient p1, p2, p3;

    return 0;
}