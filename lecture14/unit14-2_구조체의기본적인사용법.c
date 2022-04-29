#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 41

// 쿠키틀이라고 생각하면 편하다.
struct person // Person is a tag of structure
{
    /* data */
    char name[MAX];
    int age;
    float height;
};

int main(){
    int flag;

    /* Struct variable*/
    struct person genie;

    /* dot(.)은 멤버에 접근하기 위한 오퍼레이터 */
    strcpy(genie.name, "Will Smith");
    
    genie.age = 1000;


    // flag = scanf("%f", &genie.height); // &(genie.height)
    // printf("%f\n", genie.height);
    
    /* Initialization */
    struct person princess = {"Naomi Scaott", 18, 160.0f};

    struct person princess2 = {
        "Naomi Scott",
        18,
        160.0f
    };

    /* Designated initailizers */
    struct person beauty = {
        .age = 19,
        .name = "Bell",
        .height = 150.0f
    };


    /* Pointer to a structure variable */
    // 구조체 변수에 대한 포인터도 사용이 가능하다.
    struct person* someone;
    someone = &genie;

    someone->age = 1001;
    printf("%s %d\n", someone->name, (*someone).age);


    /* typedef and structure */
    // typedef를 사용하면 자료형처럼 사용할 수 있음
    typedef struct person my_person;

    my_person p3;

    typedef struct {
        char name[MAX];
        char hobby[MAX];
    } friend;

    friend f4;
    
    return 0;
}

